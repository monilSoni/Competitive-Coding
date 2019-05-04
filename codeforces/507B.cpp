
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

long long square(long long x){
	return x*x;
}

int main(){
	long long r, sx, sy, ex, ey;
	scanf("%lld %lld %lld %lld %lld",&r,&sx,&sy,&ex,&ey);
	double d = sqrt(square(abs(sx-ex)) + square(abs(sy-ey)));
	if(d == floor(d) && (LL)d%(2*r)==0){
		printf("%lld\n",(LL)d/(2*r));
	}else{
		printf("%lld\n",(LL)d/(2*r) + 1);
	}
	return 0;
}

