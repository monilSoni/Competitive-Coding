
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
	int n, sum=0, x;
	scanf("%d",&n);
	rep(0,n){
		scanf("%d",&x);
		sum+=x;
	}
	(sum%n==0)?printf("%d\n",n):printf("%d\n",n-1);
	return 0;
}
