
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

bool dfs(int vertex, vector<vector<int>> &v, int target){
	bool ok;	
	if(vertex == target){
		return true;
	}else if(vertex == v.size()-1){
		return false;
	}else{
		ok = false;
		for(int i=0; i<v[vertex].size(); i++){
			ok = ok || dfs(v[vertex][i], v, target);
		}
	}
	return ok;
}


int main(){
	int n, t, x, y;
	scanf("%d %d",&n,&t);
	vector<vector<int>> v(n+1);
	for(x=1; x<n; x++){
		scanf("%d", &y);
		v[x].push_back(y+x);
	}
	(dfs(1, v, t)) ? printf("YES\n") : printf("NO\n");
	return 0;
}
