
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
	int n, m;
	scanf("%d %d",&n,&m);
	vector<int> a(n),b(m);
	rep(0,n){
		scanf("%d",&a[i]);
	}
	rep(0,m){
		scanf("%d",&b[i]);
	}
	sort(a.begin(), a.end()); sort(b.begin(), b.end());
	if(b[0]<= max(2*a[0], a[n-1])){
		printf("-1\n");
	}else{
		printf("%d\n", max(2*a[0], a[n-1]));
	}
	return 0;
}
