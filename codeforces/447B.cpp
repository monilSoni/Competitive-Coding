
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>
#include <cstdio>

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

long long maxx=INT_MIN, k;

long long cal(int pos){
	long long ans=0; pos++;
	for(int i=0; i<k; i++, pos++)
		ans+=(pos*maxx);
	return ans;
}

int main(){
	string str;
	long long x;
	long long old_sum;
	vector<long long> hash(26);
	cin >> str;
	scanf("%lld",&k);
	rep(i,0,26){
		scanf("%lld",&x);
		maxx = max(maxx, x);
		hash[i] = x;
	}
	vector<long long> dp(str.length(), 0); 
	int n = dp.size();

	dp[0] = hash[str[0]-97]; 
	old_sum = hash[str[0]-97];
	rep(i,1,str.length()){
		dp[i]=hash[str[i]-97] + dp[i-1];
		old_sum+=((i+1)*hash[str[i]-97]);
	}
	
	long long result = (old_sum + cal(0) + k*dp[n-1]);
	repp(i,1,dp.size()){
		result = max(old_sum + cal(i) + k*(dp[n-1] - dp[i-1]), result);	
	}
	printf("%lld\n",result);
	return 0;
}

/* Read the editorial :http://codeforces.com/blog/entry/13036  The actual answer does not require that for loop.*/
