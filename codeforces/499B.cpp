#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	scanf("%d %d",&n,&m);
	map<string, string> mymap;
	map<string, string>::iterator it;
	string s, t;
	for(int i=0; i<m; i++){
		cin >> s >> t;
		mymap.insert(pair<string, string>(s,t));
	}
	for(int i=0; i<n; i++){
		cin >> s;
		it = mymap.find(s);
		((it->first).length()<=(it->second).length())? cout<< it->first << " ": cout<< it->second << " ";
	}
	printf("\n");
	return 0;
}
