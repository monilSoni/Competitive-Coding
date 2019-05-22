#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	if(n==0) printf("1\n");
	else{
		n=n%4;
		if(n==0) n=4;
		printf("%d\n",(int)pow(8,n)%10);
	}
	return 0;
}
