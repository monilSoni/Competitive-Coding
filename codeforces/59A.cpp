#include<bits/stdc++.h>
using namespace std;

int main(){
	int count = 0;
	string str;
	cin >> str;
	for(int i=0; i<str.length(); i++){
		if(isupper(str[i]))
			count++;
	}
	if(count>str.length()-count)
		transform(str.begin(), str.end(), str.begin(), ::toupper);
	else
		transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout << str << "\n";
	return 0;
}
