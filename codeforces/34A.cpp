
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
	int n, a, b, min=INT_MAX;
	scanf("%d",&n);
	vector<int> v; int x;
	rep(0,n){
		scanf("%d",&x);
		v.pb(x);
	}
	rep(0,n){
		if(abs(v[i]-v[(i+1)%n]) < min){
			min = abs(v[i]-v[(i+1)%n]);
			a = i;
			b = (i+1)%n;
		}
	}
	printf("%d %d\n", a+1, b+1);
	return 0;
}
