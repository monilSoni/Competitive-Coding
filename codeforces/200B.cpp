#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x, total=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		total += x;
	}
	printf("%lf\n", (double)total/(n));
	return 0;
}
