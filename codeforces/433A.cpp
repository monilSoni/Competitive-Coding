
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
	int n, x, A=0, B=0, sum=0;
	scanf("%d",&n);
	rep(0,n){
		scanf("%d",&x);
		(x==100)?A++:B++;
		sum+=x;
	}
	for(int i=0; i<=A; i++){
		for(int j=0; j<=B; j++){
			if(i*100 + j*200 == sum/2){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}
