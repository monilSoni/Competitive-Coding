
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(i,n) for(int i=0; i<n; i++)
#define repp(i,n) for(int i=1; i<=n; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

int main(){
	int temp,a, b, c;
	cin >> a >> b >> c;
	printf("%d\n", 4*((int)sqrt((a*b)/c) + (int)sqrt((b*c)/a) + (int)sqrt((a*c)/b)));
	return 0;
}
