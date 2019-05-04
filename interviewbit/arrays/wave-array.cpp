#include <bits/stdc++.h>
using namespace std;

vector<int> wave(vector<int> &a){
	sort(a.begin(), a.end());
	int n = a.size();
	for(int i=0; i<n-1; i+=2){
		int temp = a[i];
		a[i] = a[i+1];
		a[i+1] = temp;
	}
	return a;
}

int main(){
	int n, x;
	vector<int> v;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		v.push_back(x);
	}
	v = wave(v);
	for(int i=0; i<n; i++){
		printf("%d ", v[i]);
	} printf("\n");
	return 0;
}
