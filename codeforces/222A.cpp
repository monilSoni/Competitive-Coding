
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
	int n, k;
	scanf("%d %d",&n,&k);
	vector<int> a(n);
	rep(0,n){
		scanf("%d",&a[i]);
	}
	rep(k,n){
		if(a[i] != a[k-1]){
			printf("-1");
			return 0;
		}
	} int i;
	for(i=k-2; i>=0; i--){
		if(a[i]!=a[k-1]){
			break;
		}
	}
	printf("%d\n", i+1); 
	return 0;
}
