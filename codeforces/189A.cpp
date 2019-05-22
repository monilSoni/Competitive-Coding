
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
	int n, a, b, c;
	scanf("%d %d %d %d",&n,&a,&b,&c);
	int dp[n+1]; memset(dp, -50000, sizeof(dp));
	dp[0] = 0;
	repp(i,a,n) dp[i] = max(dp[i], dp[i-a]+1);
	repp(i,b,n) dp[i] = max(dp[i], dp[i-b]+1);
	repp(i,c,n) dp[i] = max(dp[i], dp[i-c]+1);
	printf("%d\n",dp[n]);
	return 0;
}

