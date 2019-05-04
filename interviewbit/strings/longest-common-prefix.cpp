#include <bits/stdc++.h>
using namespace std;

string solve(vector<string> &a){
	int index = 0;
	int n = a.size();
	int min = INT_MAX;
	string result = "";
	for(int i = 0; i<n; i++){
		if(min > a[i].length()){
			min =a[i].length();
		}
	}
	while(index < min){
		for(int i = 0; i<n; i++){
			if(a[0].at(index) != a[i].at(index))
				return result;
		}
		result.push_back(a[0].at(index));
		index++;
	}
	return result;
}

int main(){
	int n;
	scanf("%d",&n);
	string s;
	vector<string> v;
	for(int i=0;i<n;i++){
		cin >> s;
		v.push_back(s);
	}
	cout << solve(v) << "\n";
	return 0;
}
