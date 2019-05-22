
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
	int t, n, c;
	long long x, sum=0;
	scanf("%d",&t);
	rep(i,0,t){
		sum = 0;
		scanf("%d %d",&n,&c);
		rep(j, 0, n){
			scanf("%lld",&x);
			sum+=x;
		}
		(sum>c) ? printf("No\n") : printf("Yes\n");
	}
	return 0;
}
