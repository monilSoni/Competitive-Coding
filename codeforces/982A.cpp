#include <bits/stdc++.h>
using namespace std;

int main(){	
	int n;
	string s;
	cin >> n >> s;
	if(s == "0"){
		cout << "No\n";
		return 0;
	} else if(s == "1"){
		cout << "Yes\n";
		return 0;
	}
	for(int i=0; i<s.length()-1; i++){
		if(s.at(i) == '1' && s.at(i+1) == '1'){
			printf("No\n");
			return 0;
		} 
	}
 	for(int i=0; i<s.length()-1; i++){
		if(s.at(i) == '0' && s.at(i+1) == '0'){
			if(i+2 > n-1 || s.at(i+2) == '0' || i == 0){
			printf("No\n");
			return 0;
			}
		}
	}	

	cout << "Yes\n";
	return 0;
}
