#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",n/2);
	for(int i=0; i<(n/2)-1; i++){
		printf("2 ");
	}
	(n&1)?printf("3\n"):printf("2\n");
	return 0;
}
