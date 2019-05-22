
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
	int n, x, sum=0;
	vector<int> v;
	scanf("%d",&n);
	rep(0, 7){
		scanf("%d",&x);
		sum+=x;
		v.pb(sum);
	}
	while(n>sum)	n-=sum;
	for(int i=0; i<7; i++)	
		if(v[i]>=n){
			printf("%d\n", i+1);
			break;
		}
	return 0;
}

