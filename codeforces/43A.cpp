#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int x, n;
	unordered_map<string, int> hash;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		cin >> s;
		if(hash.find(s) == hash.end())
			hash[s] = 1;
		else
			hash[s]++;
	}
	int max = INT_MIN;
	for(auto itr : hash){
		if(itr.second > max){
			max = itr.second;
			s = itr.first;
		}
	}
	cout << s << "\n";
	return 0;
}
