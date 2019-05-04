
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
	long long n, diff=0;
	scanf("%lld",&n);
	vector<long long> v(n+1); v[0]=0;
	rep(i,1,n+1) scanf("%lld",&v[i]);
	rep(i,0,n) diff+=abs(v[i]-v[i+1]);
	printf("%lld\n",2*n-1+diff);
	return 0;
}
