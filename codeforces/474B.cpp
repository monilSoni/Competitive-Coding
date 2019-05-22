#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int x;
	vector<int> v;
	v.push_back(1);
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		v.push_back(x+v[i]);
	}
	int q;
	scanf("%d",&q);
	for(int i=0; i<q; i++){
		scanf("%d",&x);
		printf("%ld\n", upper_bound(v.begin(), v.end(), x)-v.begin());
	}
	return 0;
}
