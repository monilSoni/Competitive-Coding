
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

void dfs(int vertex, vector<vector<int>> &v, vector<bool> &visited, int &counter){
	visited[vertex] = true;
	counter += v[vertex].size();
	for(int i=0; i<v[vertex].size(); i++){
		if(!visited[v[vertex][i]]){
			dfs(v[vertex][i], v, visited, counter);
		}
	}
	return;
}

int main(){
	int nodes, edges, x, y;
	scanf("%d %d", &nodes, &edges);
	vector<vector<int>> v(nodes+1);
	vector<bool> visited(nodes+1, false);
	for(int i=0; i<edges; i++){
		scanf("%d %d",&x,&y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int counter, maxx = INT_MIN;
	for(int i=1; i<=nodes; i++){
		if(!visited[i]){
			counter = 0;
			dfs(i, v, visited, counter); 
			maxx = max(maxx, counter/2);
		}
	}
	printf("%d\n", maxx);
	return 0;
}
