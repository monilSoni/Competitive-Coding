#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	long long int count = 0;
	scanf("%d %d",&n,&m);
	while(m>n){
		if(m&1){
			m+=1; 
			m/=2;
			count+=2;
		}else{
			m/=2;
			count++;
		}
	}
	count+=abs(n-m);
	printf("%lld\n", count);
	return 0;
}

