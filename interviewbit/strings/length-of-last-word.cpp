#include <bits/stdc++.h>
using namespace std;

int solve(const string str){
	int end = str.length()-1;
	int counter = 0;
	while(end>=0){
		counter=0;
		if(!isalpha(str.at(end)))
			end--;
		else{
			while(end >=0 && isalpha(str.at(end))){
				end--;
				counter++;
			}
			break;
		}
	}
	return counter;
}

int main(){
	string s = "hello worldlings";
// the next statement is param-important. usually people get stuck here. by people, i mean i get stuck here.
	getline(cin, s);
	printf("%d\n", solve(s));
	return 0;
}
