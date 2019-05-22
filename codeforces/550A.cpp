#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int x;
	if((x=s.find("AB"))!=string::npos && s.substr(x+2,string::npos).find("BA")!=string::npos){
		printf("YES\n");
	}else if((x=s.find("BA"))!=string::npos && s.substr(x+2, string::npos).find("AB")!=string::npos){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
