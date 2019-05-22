
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

int main(){
	int n, m;
	scanf("%d %d",&m,&n);
	vector<vector<int>> dp(n, vector<int>(m, 0));
	vector<vector<int>> t(m, vector<int> (n, 0));
	rep(i,0,m){
		rep(j,0,n){
			scanf("%d",&t[i][j]);
		}
	}
	dp[0][0] = t[0][0];
	rep(i,1,m) dp[0][i] = dp[0][i-1]+t[i][0];
	rep(j,1,n){
		dp[j][0] = dp[j-1][0] + t[0][j];
		rep(i,1,m){
			dp[j][i] = max(dp[j-1][i], dp[j][i-1])+t[i][j];
		}
	}
	rep(i,0,m){
		printf("%d ", dp[n-1][i]);
	}
	printf("\n");
	return 0;
}
