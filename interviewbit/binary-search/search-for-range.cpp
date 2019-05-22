#include <bits/stdc++.h>
using namespace std;

int occ(const vector<int> &a, int b, bool less){
	int low = 0;
	int high = a.size()-1;
	int mid;
	if(less){
		while(low<high){
			mid = low + (high-low)/2;
			if(a[mid] == b) high = mid;
			else if(a[mid] > b) high = mid-1;
			else low = mid+1;
		}
		if(low < a.size() && a[low] == b)
			return low;
	} else{
		while(low<high){
			mid = low + (high-low+1)/2;
			if(a[mid] == b) low = mid;
			else if(a[mid] > b) high = mid-1;
			else low = mid+1;
		}
		if(low < a.size() && a[low] == b)
			return low;
	}
	return -1;
}

vector<int> searchRange(const vector<int> &a, int b){
	vector<int> v;
	v.push_back(occ(a, b, true));
	v.push_back(occ(a, b, false));
	return v;
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
	vector<int> a = searchRange(v, x);
	printf("%d %d\n", a[0],a[1]);
	return 0;
}
