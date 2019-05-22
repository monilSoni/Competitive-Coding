#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a, p, p_min=INT_MAX, result=0;
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &p);
		if(p<p_min)
			p_min = p;
		result+=a*p_min;
	}
	printf("%d\n", result);
	return 0;
}
