#include<bits/stdc++.h>
using namespace std;

int sqrt(int x){
	long int low = 0;
	long int high = x;
	long int mid;
	while(low<=high && low>0 && high>0){
		mid = low + (high-low)/2;
		if(mid*mid == x) return mid;
		else if(mid*mid < x) low = mid+1;
		else high = mid-1;
	}
	return high;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", sqrt(n));
	return 0;
}
