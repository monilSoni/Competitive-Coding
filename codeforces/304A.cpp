
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
	int n, count = 0;
	scanf("%d",&n);
	for(int c=1; c<=n; c++)	for(int a=1; a<=c/sqrt(2); a++) if((sqrt(c*c - a*a)) == floor((sqrt(c*c - a*a)))) count ++;
	printf("%d\n",count);
	return 0;
}
