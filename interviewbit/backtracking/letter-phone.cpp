#include <bits/stdc++.h>
using namespace std;

map<char, string> m = {
	{'0', "0"},
        {'1', "1"},
	{'2', "abc"} ,
	{'3', "def"} ,
	{'4', "ghi"} ,
	{'5', "jkl"} ,
	{'6', "mno"} ,
	{'7', "pqrs"} ,
	{'8', "tuv"} ,
	{'9', "wxyz"}
};

vector<string> solve(string A){
	vector<string> v;
	string x, s;
	if(A.length() == 1){
		if(A == "0" || A == "1"){
			v.push_back(A);
			return v;
		}else{
			x = m.find(A[0])->second;
			for(int i=x.length()-1; i>=0; i--){
				s.push_back(x[i]);
				v.push_back(s);
				s.clear();
			}
			return v;
		}
	}
	v = solve(A.substr(1, string::npos));
	int n = v.size();
	x = m.find(A[0])->second;
	for(int i=x.length()-1; i>=0; i--){
	 	s.push_back(x[i]);
		for(int j=0; j<n; j++){
			v.push_back(s+v[j]);
		}
		s.clear();
	}
	v.erase(v.begin(), v.begin()+n);
	return v;
}	

int main(){
	string s;
	cin >> s;
	vector<string> v = solve(s);
	reverse(v.begin(), v.end());
	for(int i=0; i<v.size(); i++){
		cout << v[i] << "\n";
	}
	return 0;
}
