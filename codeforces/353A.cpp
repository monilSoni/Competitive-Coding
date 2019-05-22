
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
	int n, up=0, low=0, x, y, t=0;
	scanf("%d",&n);
	rep(0,n){
		scanf("%d %d",&x,&y);
		up+=x; low+=y;
		if((up&1)!=(low&1)) t++;
	}
	if((up+low)%2) printf("-1\n");
	else{
		if(up%2==0&&low%2==0) printf("0\n");
		else if(t==0) printf("-1\n");
		else printf("1\n");
	}
	return 0;
}
