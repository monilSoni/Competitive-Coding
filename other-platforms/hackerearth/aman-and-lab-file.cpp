#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b;
	vector<pair<int, int>> v;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a+b, i+1));
	}
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++){
		printf("%d ",v[i].second);
	}
	return 0;
}
