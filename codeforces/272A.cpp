#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, sum=0, x;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		sum+=x;
	}n++; x = 0;
	for(int i=1; i<=5; i++){
		if((sum+i)%n!=1){
			x++;
		}
	}
	cout << x << "\n";
	return 0;
}
