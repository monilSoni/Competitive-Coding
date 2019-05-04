#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	scanf("%d %d",&n,&k);
	long long x, sum=0;
	vector<pair<long long, long long>> v;
	for(int i=0; i<n; i++){
		scanf("%lld",&x);
		sum+=x;
		v.push_back((make_pair(x, sum)));
	}
	int min = k-1;
	for(int i=n-1; i>=k; i--){
		v[i].second-=v[i-k].second;
		if(v[i].second<v[min].second){
			min=i;
		}
	}
	printf("%d\n",min-k+2);
       	return 0;
}	
	
