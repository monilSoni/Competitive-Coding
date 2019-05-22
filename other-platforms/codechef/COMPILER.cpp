#include<bits/stdc++.h>
using namespace std;

unordered_map<char, char> match = {
	{'<', '>'}
};
	
void isBalanced(string str){
	stack<char> s;
	int maxx = INT_MIN, count = 0;
	for(int i=0; i<str.size(); i++){
		if(str[i]=='<'){
			s.push(str[i]);
		}else{
			if(!s.empty() && str[i]==match[s.top()]){
				s.pop();
				count+=2;
			}else{
				maxx = max(maxx, count);
				count = 0;
				break;
			}
		}
	}

	maxx = max(maxx, count);	
	printf("%d\n", maxx);
	return;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		isBalanced(s);
	}
}
