#include <bits/stdc++.h>
using namespace std;

int searchInsert(const vector<int> &a, int b){
	int low = 0;
	int high = a.size()-1;
	int mid;
	while(low<=high){
		mid = low + (high-low)/2;
		
		if(a[mid] == b) return mid;
		else if(a[mid] > b) high = mid-1;
		else low = mid+1;
	}
	return low;
}


int main(){
	int n;
	scanf("%d",&n);
	int x;
	vector<int> v;
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	scanf("%d",&x);
	printf("%d\n", searchInsert(v,x));
	return 0;
}
