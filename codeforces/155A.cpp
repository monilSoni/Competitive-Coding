#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	scanf("%d",&n);
	scanf("%d",&x);
	int max = x, min = x, count=0;
	for(int i=1; i<n; i++){
		scanf("%d",&x);
		if(x>max || x<min){
			count++;
			if(x>max) max = x;
			if(x<min) min = x;
		}
	}
	printf("%d\n", count);
	return 0;
}
