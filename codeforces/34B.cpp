#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, sum = 0, x;
	vector<int> v;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		if(x<=0) v.push_back(x);
	}
	sort(v.begin(), v.end());
	if(m>v.size()) m = v.size();
	printf("%d\n", abs(accumulate(v.begin(), v.begin()+m, 0)));
	return 0;
}

