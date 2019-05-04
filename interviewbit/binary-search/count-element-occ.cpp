#include <bits/stdc++.h>
using namespace std;

/*
int counter = 0;
void check(const vector<int> &a, int b, int start, int end){
	if(start > end) return;
	int mid = start + (end-start)/2;
	if(a[mid] == b) counter++;
	check(a, b, mid+1, end);
	check(a, b, start, mid-1);
}
*/

int modBS(const vector<int> &a, int b, bool search){
	int low = 0;
	int high = a.size()-1;
	int result = -1;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(a[mid] == b){
			result = mid;
			if(search) high = mid-1;
			else low = mid+1;
		}else if(b < a[mid]) high = mid-1;
		else low = mid+1;
	}
	return result;
}
	
int findCount(const vector<int> &a, int b){
//	check(a, b, 0, a.size()-1);	
	int low = modBS(a, b, true);
	int high = modBS(a, b, false);	
        if(low == -1) return 0; else return high-low+1; 
	//return counter;	
}

int main(){
	int n, x;
	vector<int> v;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		v.push_back(x);
	}
	int target;
	scanf("%d", &target);
	printf("%d\n", findCount(v, target));
	return 0;
}
