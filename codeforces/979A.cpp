#include <stdio.h>
using namespace std;

int main(){
	long long int n;
	scanf("%lld",&n);
	if(n!=0) ((n+1)%2==0)?n=(n+1)/2:n=n+1;
	printf("%lld\n",n);
	return 0;
}	
