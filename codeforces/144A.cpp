#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, min=INT_MAX, min_i=-1, max=INT_MIN, max_i=n;
	scanf("%d",&n);
	int x;
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		if(x>max){
			max = x;
			max_i = i;
		}
		if(x<=min){
			min = x;
			min_i = i;
		}
	}
	x = n-1-min_i+max_i;
	if(min_i<max_i) x--;
	printf("%d\n", x);
	return 0;
}
