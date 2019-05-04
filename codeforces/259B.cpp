
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
	vector<vector<long long>> a(3, vector<long long> (3,0));
	rep(i,0,3){
		rep(j,0,3){
			scanf("%lld",&a[i][j]);
		}
	}
	a[0][0] = (2*a[2][0] + a[2][1] - a[0][1])/2;
	a[2][2] = a[0][2] + a[2][0] - a[0][0];
	a[1][1] = a[0][0] + a[0][1] + a[0][2] - a[1][0] - a[1][2];

	rep(i,0,3){
		rep(j,0,3){
			printf("%lld ",a[i][j]);
		}puts("");
	}
	return 0;
}
