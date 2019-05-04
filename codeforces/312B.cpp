
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
	int a, b, c, d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	double p = a/(double)b;
	double q = c/(double)d;
	printf("%0.12lf\n", p/(1-(1-p)*(1-q)));
	return 0;
}
