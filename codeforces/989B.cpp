#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, p;
	bool done = false;
	scanf("%d %d",&n,&p);
	string s;
	cin >> s;
	for(int i=0; i<s.length()-p; i++){
		if((s[i]=='1'&&s[i+p]=='0') || (s[i]=='0'&& s[i+p]=='1')){
			done = true;
	       		break;
		}	
		if(s[i] == '.' && s[i+p] == '.'){
			s[i] = '0';
			s[i+p] = '1';
			done = true;
			break;
		}else if(s[i] == '.'){
			(s[i+p]=='1')?s[i]='0':s[i]='1';
			done = true;
			break;
		}else if(s[i+p] == '.'){
			(s[i]=='1')?s[i+p]='0':s[i+p]='1';
			done = true;
			break;
		}else continue;
	}
	if(done){
		int x = s.find(".");
		while(x!=string::npos){
			s[x] = '0';
			x = s.find(".");
		}
		cout << s << "\n";
	}else{
		printf("No\n");
	}
	
	return 0;
}
