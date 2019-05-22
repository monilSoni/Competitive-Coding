#include<bits/stdc++.h>
using namespace std;

/* Reasons for multiple submits is not observing the data ranges correctly. */

int main(){
	long long int n;
	scanf("%lld",&n);
	long long int x;
	vector<long long int> v;
	for(long long int i=0; i<n; i++){
		scanf("%lld",&x);
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	long long int diff = v[n-1] - v[0];
	long long int count = 0;
	long long int min = upper_bound(v.begin(), v.end(),v[0])-lower_bound(v.begin(), v.end(), v[0]);
	long long int max = upper_bound(v.begin(), v.end(),v[n-1])-lower_bound(v.begin(), v.end(), v[n-1]);
	(min!=n)?printf("%lld %lld\n", diff, min*max):printf("%lld %lld\n",diff, (min*(min-1))/2);
	return 0;
}
