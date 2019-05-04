
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
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
	long long n, x;
	vector<long long> v;
	scanf("%lld",&n);
	rep(0,n){
		scanf("%lld",&x); v.pb(x);
	}
	sort(v.begin(), v.end()); x=0;
	rep(0, n){
		x+=abs(i+1-v[i]);
	}
	cout << x << "\n";
	return 0;
}
