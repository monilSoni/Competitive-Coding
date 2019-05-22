
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
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d %d",&n, &m);
	if(n>=m){
		rep(0,m) printf("BG");
		rep(0, n-m) printf("B");
	}else{
		rep(0,n) printf("GB");
		rep(0, m-n) printf("G");
	}printf("\n");
	return 0;
}
