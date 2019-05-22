#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	scanf("%d %d",&n,&m);
	bool prime[51];
	memset(prime, true, sizeof(prime));
	for (int p=2; p*p<=50; p++){
		if (prime[p] == true){
		    for (int i=p*2; i<=50; i += p)
			prime[i] = false;
		}
	}

	if(prime[m]){
		int i=n+1;
		while(!prime[i]){
			i++;
		}
		if(i!=m){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}else{
		printf("NO\n");
	}
	return 0;
}
