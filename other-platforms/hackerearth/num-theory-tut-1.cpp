
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<LL> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(i,s,n) for(LL i=s; i<n; i++)
#define repp(i,s,n) for(LL i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

LL modExp(LL A, LL B, LL M){
	LL result = 1;
	while(B>0){
		if(B&1) result = ((result%M)*(A%M))%M;
		A = ((A%M)*(A%M))%M;
		B/=2;
	}
	return result;
}

LL x, y;
void extGCD(LL A, LL B){
	if(B==0){
		x = 1;
		y = 0;
	}else{
		extGCD(B, A%B);
		LL temp = x;
		x = y;
		y = temp - y*(A/B);
	}
}

LL modInv(LL C, LL M){
	extGCD(C, M);
	return (x%M + M)%M;
}

int main(){
	LL A, B, C, M;
	scanf("%lld %lld %lld %lld",&A,&B,&C,&M);
	LL temp1 = modExp(A, B, M);
	LL temp2 = modInv(C, M);
	printf("%lld\n", ((LL)(temp1%M)*(LL)(temp2%M))%M);
	return 0;
}

