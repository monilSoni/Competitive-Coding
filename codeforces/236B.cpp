
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <signal.h>
#include <unistd.h>
using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define mod 1073741824
#define MOD 1000000007
#define rep(s,n) for(int i=s; i<n; i++)
#define repp(s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

bool prime[1000005];

void initialise(){
	memset(prime, true, sizeof(prime));
	prime[0] = false;
	prime[1] = false;
	for (int p = 2; p * p < 1000005; p++)
		if (prime[p] == true)
			for (int i = p * 2; i < 1000005; i += p)
			prime[i] = false;
}

long long d(int n){
	long long total = 1;
	for (int p = 2; p <= n; p++){
		if (prime[p]){
			int count = 0;
			if (n % p == 0) {
				while (n % p == 0) {
				    n = n / p;
				    count++;
				}
				total = ((total%mod)*((++count)%mod))%mod;
			}
		}
	}
    	return total;
}

int main(){
	int a, b, c;
	long long ans = 0;
	scanf("%d %d %d",&a,&b,&c);
	initialise();
	for(int i=1; i<=a; i++){
		for(int j=1; j<=b; j++){
			for(int k=1; k<=c; k++){
				ans = (ans%mod + d(i*j*k)%mod)%mod;
			}
		}
	}
	printf("%lld\n", ans);
	return 0;
}
