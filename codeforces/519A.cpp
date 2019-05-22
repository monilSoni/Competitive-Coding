#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	vector<string> v;
	int white = 0, black=0;
	unordered_map<char, int> mymap ={
		{'q', 9},
		{'r', 5},
		{'b', 3 },
		{'n', 3 },
		{'p', 1 },
		{'k', 0 }
	};
	for(int i=0; i<8; i++){
		cin >> s;
		v.push_back(s);
	}
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(v[i][j] == '.') continue;
			if(isupper(v[i][j])){
				white+=mymap.find(tolower(v[i][j]))->second;
			}else{
				black+=mymap.find(v[i][j])->second;
			}
		}
	}
	if(black>white)
		printf("Black\n");
	else if(white>black)
		printf("White\n");
	else
		printf("Draw\n");
	return 0;
}
