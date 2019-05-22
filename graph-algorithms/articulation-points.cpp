
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

void artpoints(vector<vector<bool>> &v, vector<int> &disc, vector<int> &low, vector<bool> &visited, vector<int> &parent, vector<bool> &ap, set<pair<int, int>> &s, int vertex, int time){
	visited[vertex] = true;
	disc[vertex] = low[vertex] = time;
	int child = 0;
	int nodes = v.size();
	rep(i, 1, nodes){
		if(v[vertex][i]){
			if(!visited[i]){
				child++;
				parent[i] = vertex;
				artpoints(v, disc, low, visited, parent, ap, s, i, time+1);
				low[vertex] = min(low[vertex], low[i]);
				
				//Articulation point
				if(parent[vertex] == -1 && child > 1){
					ap[vertex]=true;
				}else if(parent[vertex]!=-1 && low[i] >= disc[vertex]){
					ap[vertex]=true;
				}

				//Bridges
				if(low[i] > disc[vertex]){
					s.insert(mp(vertex, i));
				}

			}else if(parent[vertex] != i){
				low[vertex] = min(low[vertex], disc[i]);
			}
		}
	}
	return;
}

int main(){
	int nodes, edges, x, y;
	scanf("%d %d",&nodes,&edges);
	vector<vector<bool>> v(nodes+1, vector<bool>(nodes+1, false));
	vector<bool> visited(nodes+1);
	for(int i=0; i<edges; i++){
		scanf("%d %d",&x,&y);
		v[x][y] = true;
		v[y][x] = true;
	}
	vector<bool> ap(nodes+1, false);
	vector<int> parent(nodes+1, -1);
	vector<int> low(nodes+1);
	vector<int> disc(nodes+1);
	set<pair<int, int>> s;
	artpoints(v, disc, low, visited, parent, ap, s, 1, 0);
	printf("Articulation Points -----------------------------\n");
	rep(i,1,nodes+1){
		if(ap[i]) printf("%d ", i);
	}printf("\n");
	printf("Bridges -------------------------------------\n");
	for(auto it: s){
		printf("%d %d\n", it.first, it.second);
	}
	return 0;
}
