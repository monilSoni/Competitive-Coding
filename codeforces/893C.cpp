
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

vector<vector<int>> v(100005, vector<int>(0));
vector<int> visited(100005, false);
vector<int> cost(100005, 0);

void dfs(int x, int& minn){
	visited[x] = true;
	minn = min(minn, cost[x]);
	rep(i,0,v[x].size()){
		int y = v[x][i];
		if(!visited[y]){
			dfs(y, minn);
		}
	}
	return;
}

int main(){
	int n, m, x, y;
	scanf("%d %d",&n,&m);
	repp(i,1,n) scanf("%d",&cost[i]);
	rep(i,0,m){
		scanf("%d %d",&x,&y);
		v[x].pb(y);
		v[y].pb(x);
	}
	long long result = 0;
	repp(i,1,n){
		if(!visited[i]){
			int minn = INT_MAX;
			dfs(i, minn);
			result += (LL)minn;
		}
	}
	printf("%lld\n", result);
	return 0;
}
