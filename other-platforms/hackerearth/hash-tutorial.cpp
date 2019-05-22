#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<int, string> hash;
	int n, x;
	string s;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		cin >> x >> s;
		hash[x] = s;
	}
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		cout << hash[x] << "\n";
	}
	return 0;
}
