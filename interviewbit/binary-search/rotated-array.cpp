#include <bits/stdc++.h>
using namespace std;

int findMin(const vector<int> &a){
	int low = 0;
	int high = a.size()-1;
	int n = a.size();
	while(low<=high){
		if(a[low] <= a[high]) return a[low];
		int mid = low + (high-low)/2;
		int next = (mid+1)%n;
		int prev = (mid+n-1)%n;
		if(a[mid] < a[next] && a[mid] < a[prev])
			return a[mid];
		else if(a[mid] < a[high]) high = mid-1;
		else low = mid+1;
	}
	return -1;
}

int main(){
	int n, x;
	vector<int> v;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		v.push_back(x);
	}
	printf("%d\n", findMin(v));
	return 0;
}
