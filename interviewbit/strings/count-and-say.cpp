#include <bits/stdc++.h>
using namespace std;

string solve(int a){
	if(a==1) return "1";
	string str = "11";
	string result = "";
	while(--a > 1){
		int n = str.length();
		int count = 1;
		for(int i=0; i<n; i++){
			if(i+1 <= n-1 && str.at(i) == str.at(i+1))
				count++;
			else{
				result += to_string(count);
				result += str.at(i);
				count = 1;
			}
		}
		str = result;
		result = "";
	}
	return str;
}

int main(){
	int n;
	scanf("%d",&n);
	cout << solve(n) << "\n";
	return 0;
}
