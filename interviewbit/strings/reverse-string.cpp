#include <bits/stdc++.h>
using namespace std;

string reverseWords(string &str){
	int index = 0;
	int n = str.length();
	string temp = "";
	string result = "";
	int i;
	while(index < n){
		temp = "";
		for(i=index; i<n; i++){
			if(str.at(i) == ' ')
				break;
			else
				temp.push_back(str.at(i));
		}
		index = i+1;
		if(result.compare("")) result = temp + ' ' + result;
                else result = temp;
	}
	return result;
}

int main(){
	string s;
	getline(cin, s);
	cout << reverseWords(s) << '\n';
	return 0;
}
