#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long x, sum = 0;
	vector<long long> v;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lld",&x);
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	sum = v[0];
	int count = 1;
	for(int i=1; i<n; i++){
		if(sum<=v[i]){
			count++;
			sum+=v[i];
		}
	}
	printf("%d\n", count);
	return 0;
}
