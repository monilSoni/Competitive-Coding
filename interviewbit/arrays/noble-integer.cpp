#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a){
	sort(a.begin(), a.end());
	int n = a.size();
	for(int i=0; i<n; i++){
		int j = i+1;
		while(a[j] == a[i] && j < n){
			j++;
		} 
		if(a[i] == n-j){
			return 1;
		}else
			i = j-1;
	}
	return -1;
}

int main(){
	int n;
	int x;
	vector<int> v;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		v.push_back(x);
	}
	printf("%d\n", solve(v));
	return 0;
}
