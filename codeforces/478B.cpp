#include<bits/stdc++.h>
using namespace std;

long long int C(long long int n){
	if(n<2) return 0;
	return (n*(n-1))/2;
}

int main(){
	long long int n,m;
	scanf("%lld %lld",&n, &m);
	long long int x = n/m, y = n%m;
	printf("%lld %lld\n", y*C(x+1)+(m-y)*C(x), C(n-m+1));
	return 0;
}	
