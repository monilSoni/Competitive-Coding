#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	scanf("%d %d",&n, &t);
	long long sum = 0, x, max=LONG_MIN;
	vector<long long> v;
	for(int i=0; i<n; i++){
		scanf("%lld",&x);
		sum+=x;
		v.push_back(sum);
	}
	sum=t;
	for(int i=0; i<n; i++){
		if(i!=0){
			sum = t+v[i-1];
		}
		x = upper_bound(v.begin(), v.end(), sum)-v.begin();
		if(x-i>max){
			max = x-i;
		}
	}
	printf("%lld\n",max);
	return 0;
}

