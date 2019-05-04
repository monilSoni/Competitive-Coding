#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, x;
	unordered_map<int, int> hash;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		hash[x] = i;
	}
	scanf("%d",&m);
	long long a=0, b=0;
	for(int i=0; i<m; i++){
		scanf("%d",&x);
		int index = hash[x];
		a+=(index+1); b+=(n-index);
	}
	printf("%lld %lld\n", a, b);
	return 0;
}
