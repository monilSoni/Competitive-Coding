#include<bits/stdc++.h>
using namespace std;

int multiply(string s){
	int product = 1;
	for(int i=0; i<s.size(); i++){
		product*=(s[i]-'0');
	}
	return product;
}

int main(){
	int n;
	scanf("%d",&n);
	string s = to_string(n);
	int k=1;
	unordered_set<int> map;
	while(k<=s.size()){
		for(int i=0; i<s.size()-k+1; i++){
			int x = multiply(s.substr(i, k));
			if(map.find(x)!=map.end()){
				printf("NO\n");
				return 0;
			}
			map.insert(x);
		}k++;
	}
	printf("YES\n");
	return 0;
}
