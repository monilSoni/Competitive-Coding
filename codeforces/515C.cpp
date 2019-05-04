#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	string s, result;
	cin >> s;
	for(int i=0; i<n; i++){
		if(s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7'){
		       result.push_back(s[i]);
		}else{
			switch(s[i]){
				case '4': result+="223";
					  break;
				case '6': result+="35";
					  break;
				case '8': result+="2227";
					  break;
				case '9': result+="2337";
					  break;
				default: continue;
			}
		}
	}
	sort(result.rbegin(), result.rend());
	cout << result << "\n";
	return 0;
}
	
