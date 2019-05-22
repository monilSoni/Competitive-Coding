#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, count=0;
	scanf("%d %d",&n, &m);
	for(int i=0; i<=1000; i++) for(int j=0; j<=1000; j++) if(i*i+j == n && i+j*j == m) count++;
	printf("%d\n",count);
	return 0;
}
