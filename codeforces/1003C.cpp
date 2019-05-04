
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
	int n, k;
	scanf("%d %d",&n,&k);
	double sum=0, maxx=INT_MIN;
	vector<int> v(n);
	vector<vector<int>> dp(n-k+1, vector<int> (n-k+1, 0));

	rep(i,0,n) scanf("%d",&v[i]);
	for(int i=0; i<k; i++){
		dp[0][0]+=v[i];
	}

	for(int j=1; j+k-1<n; j++){
		dp[0][j] = dp[0][j-1] + v[k-1+j];
	}

	for(int i=1; i<= n-k+1; i++){
		for(int j=0; j<=n-k-i; j++){
			dp[i][j] = dp[i-1][j+1] - v[i-1];
		}
	}
	
	for(int i=0; i<dp.size(); i++){
		for(int j=0; j<=n-k-i; j++){
			maxx = max(maxx, dp[i][j]/(double)(j+k));
		} 
	}

	printf("%lf\n",maxx);
	return 0;
}
