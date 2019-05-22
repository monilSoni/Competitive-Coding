#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, x;
	vector<int> v;
	scanf("%d %d",&n, &k);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int count = 0;
	for(int j=0; j<n-1; j++){
		for(int i=upper_bound(v.begin()+j,v.end(), v[j])-v.begin(); i<n; i++){
			if(v[i]==v[j]) continue;
			else if(v[i]-v[j]<=k){
				count++;
				break;
			}else{
				break;
			}
		}
	}
	printf("%d\n", n-count);
	return 0;
}

