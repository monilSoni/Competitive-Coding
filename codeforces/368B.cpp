#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, x;
	vector<pair<int, int>> v;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		v.push_back(make_pair(x,0));
	}
	set<int> s;
	for(int i=n-1; i>=0; i--){
		s.insert(v[i].first);
		v[i].second = s.size();
	}
	for(int i=0; i<m; i++){
		scanf("%d",&x);
		printf("%d\n", v[x-1].second);
	}
	return 0;
}

