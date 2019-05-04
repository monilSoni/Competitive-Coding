#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	int x;
	set<int> myset;
	vector<int> v;
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		if(!(myset.find(x) != myset.end())){
			myset.insert(x);
			v.push_back(i+1);
		}
	}	
	if(myset.size() >= k){
		printf("YES\n");
		for(int i=0; i<k; i++){
			printf("%d ",v[i]);
		}
		printf("\n");
	}
	else
		printf("NO\n");
	return 0;
}
