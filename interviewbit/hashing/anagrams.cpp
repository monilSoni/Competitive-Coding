#include<bits/stdc++.h>
using namespace std;

void solve(vector<string> &A){
	unordered_map<string, int> hash;
	vector<vector<int>> result;
	vector<int> v(2, 0);
	for(int i=0; i<A.size(); i++){
		string temp = A[i];
		sort(temp.begin() ,temp.end());
		if(hash.find(temp)!=hash.end()){
			v[0] = hash[temp]+1;
		        v[1] = i+1;
			result.push_back(v);
		}
		if(hash.find(temp) == hash.end()){
			hash[temp] = i;
		}
	}
}

int main(){
	int n;
	vector<string> v;
	scanf("%d", &n);
	string s;
	for(int i=0; i<n; i++){
		cin >> s;
		v.push_back(s);
	}
	solve(v);
	return 0;
}
