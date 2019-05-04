#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b;
	vector<pair<int, int>> v;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d %d",&a,&b);
		v.push_back(make_pair(b,a));
	}
	sort(v.rbegin(), v.rend());
	for(int i=0; i<n-1; i++){
		if(v[i].first>v[i+1].first && v[i].second<v[i+1].second){
			printf("Happy Alex\n");
			return 0;
		}
	}
	printf("Poor Alex\n");
	return 0;
}
