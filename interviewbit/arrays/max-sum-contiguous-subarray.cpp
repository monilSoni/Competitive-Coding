#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	vector<int> v;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	int sum = 0;
	int maxsum = INT_MIN;
	for(int i=0; i<n; i++){
		sum+=v[i];
		if(maxsum < sum)
			maxsum = sum;
		if(sum<0)
			sum=0;
	}
	cout << maxsum << "\n";
	return 0;
}
