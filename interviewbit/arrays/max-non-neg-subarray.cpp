#include <bits/stdc++.h>
using namespace std;

vector<int> maxset(vector<int> &a){
	vector<int> result;
	long long int max_sum = -1;
	int j;
	int n=a.size();
	pair <int, int> range = make_pair(-1, -1);
	for(int i=0; i<n; ){
		if(a[i] < 0)
			i++;
		else{
			long long int sum = 0;
			j = i;
			while(a[j] >= 0 && j < n){
				sum+=a[j];
				j++;
			} 
			if(sum > max_sum){
				max_sum = sum;
				range = make_pair(i, j);
			} else if(sum == max_sum){
				int diff1 = range.second - range.first;
				int diff2 = j-i;
				if(diff2 > diff1) range = make_pair(i, j);
			}
			i = j+1;
		}
	}

	for(int i=range.first; i>-1 && i<range.second; i++)
		result.push_back(a[i]);

	return result;
}

int main(){
	int size = 0;
	int x = 0;
	vector<int> v;
	scanf("%d", &size);
	for(int i=0; i<size; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	vector<int> ans = maxset(v);
	for(int i=0; i<ans.size(); i++)
		printf("%d ", ans[i]);
	return 0;
}


