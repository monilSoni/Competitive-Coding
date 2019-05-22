
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
	int n, x, min=INT_MAX, mini, count=1;
	scanf("%d",&n);
	rep(0,n){
		scanf("%d",&x);
		if(x==min) count++;
		if(x<min){
			count=1;
			min=x;
			mini=i;
		}
	}
	(count>1)?printf("Still Rozdil\n"):printf("%d\n",mini+1);
	return 0;
}

