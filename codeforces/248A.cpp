#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, l=0, r=0, x, y;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d %d",&x, &y);
		if(x) l++;
		if(y) r++;
	}
	int total = 0;
	if(l>n-l) total+=n-l; else total+=l;
	if(r>n-r) total+=n-r; else total+=r;
	printf("%d\n", total);
	return 0;
}
