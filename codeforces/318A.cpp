
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(s,n) for(int i=s; i<n; i++)
#define repp(s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

int main(){
	ll n, k;
	scanf("%lld %lld", &n, &k); k--;
	if(k<(n+1)/2) cout << 2*k+1 << "\n";
	else cout<< 2+2*(k-(n+1)/2) << "\n";
	return 0;
}
