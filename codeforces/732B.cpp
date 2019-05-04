#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, x;
	scanf("%d %d", &n,&k);
	vector<int> v;
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		v.push_back(x);
	}
	int total = 0;
	for(int i=1; i<n; i++){
	       if(v[i]+v[i-1]<k){
			total+=k-v[i]-v[i-1];
			v[i]+=k-v[i]-v[i-1];
	       }
	}
	printf("%d\n",total);	
 	for(int i=0; i<n; i++){
		printf("%d ",v[i]);
	}printf("\n");
	return 0;
}
