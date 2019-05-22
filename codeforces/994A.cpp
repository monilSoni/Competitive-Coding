#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, x;
	scanf("%d %d",&n, &m);
	vector<int> v;
	unordered_set<int> myset;
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	for(int i=0; i<m; i++){
		scanf("%d",&x);
		myset.insert(x);
	}
	for(int i=0; i<n; i++){
		if(myset.find(v[i])!=myset.end())
			printf("%d ", v[i]);
	}
	printf("\n");
	return 0;
}
