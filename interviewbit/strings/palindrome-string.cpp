#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string str){
	int low = 0;
	int high = str.length()-1;
	while(low <= high){
		if(!isalnum(str.at(low))){
			low++;
			continue;
		} else if(!isalnum(str.at(high))){
			high--;
			continue;
		} else{
			if(tolower(str.at(low)) != tolower(str.at(high)))
				return 0;
			low++;
			high--;
		}
	}
	return 1;
}

int main(){
	string s="";
	cin >> s;
	printf("%d\n", isPalindrome(s));
	return 0;
}
