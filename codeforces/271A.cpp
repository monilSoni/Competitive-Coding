#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	unordered_set<char> hash;
	while(++n){
		string str = to_string(n);	
		hash.clear();
		for(int j=0; j<str.length(); j++) hash.insert(str[j]);
		if(hash.size() == str.size()){
			printf("%d\n", n);
			break;
		}
	}
	return 0;
}