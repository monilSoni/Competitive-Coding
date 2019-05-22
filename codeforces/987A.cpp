#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	scanf("%d",&n);
	map<string, string> g;
	g.insert(pair<string, string> ("purple", "Power"));
	g.insert(pair<string, string> ("green", "Time"));
	g.insert(pair<string, string> ("blue", "Space"));
	g.insert(pair<string, string> ("orange", "Soul"));
	g.insert(pair<string, string> ("red", "Reality"));
	g.insert(pair<string, string> ("yellow", "Mind"));
	for(int i=0; i<n; i++){
		cin >> s;
		g.erase(s);
	}
	printf("%d\n", (int)g.size());
	map <string, string> :: iterator itr;
	for (itr = g.begin(); itr != g.end(); ++itr){
	      printf("%s\n", itr->second.c_str());
	}
	return 0;
}
