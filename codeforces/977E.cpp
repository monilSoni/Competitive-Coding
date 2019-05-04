
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

vector<vector<int>> v(2*100005, vector<int>(0));
vector<int> disc(2*100005, -1);
vector<int> parent(2*100005, -1);

void dfs(int x, bool& ok, int time){
	disc[x] = time;
	if(v[x].size()!=2) ok = false;
	for(int i=0; i<v[x].size(); i++){
		int y = v[x][i];
		if(disc[y] == -1){
			parent[y] = x;
			dfs(y, ok, time+1);
		}else if(y == parent[x]){
			continue;
		}else if(disc[y]!=1){
			ok = false;
		}else if(disc[y] == 1){
			parent[y] = x;
		}
	}
	return;
}

int main(){
	int nodes, edges, x, y;
	scanf("%d %d",&nodes,&edges);
	rep(i,0,edges){
		scanf("%d %d",&x,&y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int count = 0;
	repp(i,1,nodes){
		if(disc[i] == -1){
			bool ok = true;
			dfs(i, ok, 1);
			if(ok) count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
