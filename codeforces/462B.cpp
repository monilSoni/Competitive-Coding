
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
	long long n, k;
	vector<long long> f(26,0);
	scanf("%lld %lld",&n, &k);
	string s;
	cin >> s;
	rep(i,0,n){
		f[s[i]-65]++;
	}
	sort(rall(f)); int i = 0; long long ans=0;
	while(k>0){
		if(f[i]>=k){
			ans+=(k*k);
			k=0;
		}else{
			ans+=(f[i]*f[i]);
			k-=f[i];
			i++;
		}
	}
	printf("%lld\n",ans);
	return 0;
}

