#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	string s;
	for(int i=0; i<n; i++){
		cin >> s;
		int r = s.find("R");
		int c = s.find("C");
		if(r!=string::npos && c!=string::npos && s.find_first_of("0123456789")<c){
			string result = "";
			int no = stoi(s.substr(c+1, string::npos));
			while(no>0){
				result.push_back(((no-1)%26)+65);
				no = (no-1)/26;
			}
			reverse(result.begin(), result.end());
			result.append(s.substr(r+1,c-r-1));
			cout << result + "\n"; 
		}else{
			int x, num = s.find_first_of("0123456789");
			string result = "R"+s.substr(num, string::npos)+"C";
			s = s.substr(0, num);
			num = 0;
			for(int i = 0; i < s.length(); i++){
				x = s.at(s.length() - 1 - i);
				x = x-64;
				num += x*pow(26,i);
			}
			result+=to_string(num);
			cout << result + "\n";
		}
	}
	return 0;
}
