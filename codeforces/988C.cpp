#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	vector<pair<int, pair<int, int>>> a; // The first number stores the sum without element(the third number) of the sequence(second number)
	for(int i=0; i<n; i++){
		int k, x, sum=0;
		scanf("%d",&k);
		vector<int> v;
		for(int j=0; j<k; j++){
			scanf("%d",&x);
			sum+=x;
			v.push_back(x);
		}
		for(int j=0; j<k; j++){
			a.push_back(make_pair(sum-v[j], make_pair(i,j)));
		}
	}
	sort(a.begin(), a.end());
	for(int i=0; i<a.size()-1; i++){
		if(a[i].first == a[i+1].first && a[i].second.first!=a[i+1].second.first){
			printf("YES\n");
			printf("%d %d\n",a[i].second.first+1, a[i].second.second+1);
			printf("%d %d\n",a[i+1].second.first+1, a[i+1].second.second+1);
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}
