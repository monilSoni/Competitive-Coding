#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, k, x;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		int maxdiff = INT_MIN;
		scanf("%d %d", &n, &k);
		for(int i=0; i<n; i++){
			scanf("%d",&x);
			if(k-x>maxdiff)
				maxdiff=k-x;
		}
		if(maxdiff<0) maxdiff=0;
		printf("%d\n", maxdiff);
	}
	return 0;
}
