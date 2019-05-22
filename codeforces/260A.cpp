
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
	long long a,b,n;
	scanf("%lld %lld %lld",&a,&b,&n);
	a*=10;
	rep(j, 0, 10){
		if((a+j)%b==0){
			a+=j;
			break;
		}
	}
	if(a%b!=0){
		printf("-1\n");
		return 0;
	}
	printf("%lld", a);
	rep(i,1,n) printf("0");
	return 0;
}
