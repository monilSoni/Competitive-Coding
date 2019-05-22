
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
	int t, x, y, p, c, k, n;
	bool ok = false;
	scanf("%d",&t);
	rep(i,0,t){
		ok = false;
		scanf("%d %d %d %d",&x,&y,&k,&n);
		if(x<=y) ok=true;
		else{
			rep(j,0,n){
				scanf("%d %d",&p,&c);
				if(p>=x-y && c<=k) ok = true;
			}
			(ok)?printf("LuckyChef\n"):printf("UnluckyChef\n");
		}
	}
	return 0;
}
