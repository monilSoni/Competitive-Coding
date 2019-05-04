
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
	int n, t, l, r;
	long long x;
	scanf("%d",&n);
	vector<vector<long long>> dp(2, vector<long long> (n+1, 0));
	rep(i,0,n){
		scanf("%lld",&x);
		dp[0][i+1] = x;
		dp[1][i+1] = x;
	}
	sort(dp[1].begin(), dp[1].end());
	rep(i, 1, n+1){
		dp[0][i] += dp[0][i-1];
		dp[1][i] += dp[1][i-1];
	}
	scanf("%d",&n);
	rep(i,0,n){
		scanf("%d %d %d", &t, &l, &r);
		printf("%lld\n", dp[t-1][r]-dp[t-1][l-1]);
	}
	return 0;
}
