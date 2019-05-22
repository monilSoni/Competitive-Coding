
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
	LL l, r;
	scanf("%lld %lld",&l,&r);
	vector<bool> isPrime(r-l+1, true);
	for(LL i=2; i*i<=r; ++i){
		printf("%lld:   ", i);
		for(LL j = max(i*i, (l+(i-1))/i * i); j<=r; j+=i){
			printf("%lld ",j);
			isPrime[j-l] = false;
		}printf("\n\n");
	}
	return 0;
}
