#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int q;
	vector<int> v;
	int x;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	scanf("%d",&q);
	sort(v.begin(), v.end());
	for(int i=0; i<q; i++){
		scanf("%d",&x);
		printf("%ld\n",upper_bound(v.begin(), v.end(), x)-v.begin());
	}
	return 0;
}
