#include <bits/stdc++.h>
using namespace std;

bool compare(int i, int j){
	string I = to_string(i);
	string J = to_string(j);
	return stol(I + J) < stol(J + I);
}

string largestNumber(vector<int> &a){
	string result= "";
	sort(a.begin(), a.end(), compare);
	for(int i=a.size()-1; i>=0; i--){
		if(result.compare("0") == 0) continue;
		result+=to_string(a[i]);
	}	
	return result;
}

int main(){
	int n, x;
	vector<int> v;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	printf("%s\n", largestNumber(v).c_str());
	return 0;
}
