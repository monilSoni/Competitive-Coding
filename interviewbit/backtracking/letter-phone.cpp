#include <bits/stdc++.h>
using namespace std;

void solve(string A, vector<string> &result, vector<string> m, string s, int x){
    if(A.length() == s.length()){
        result.push_back(s);
        return;
    }

    int n = A[x]-'0';
    for(int i=0; i<m[n].size(); i++){
        s.push_back(m[n][i]);
        solve(A, result, m, s, x+1);
        s.pop_back();
    }
    return;
}

vector<string> letterCombinations(string A) {
    vector<string> m = { "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> result;
    string s = "";
    solve(A, result, m, s, 0);
    return result;
}


int main(){
	string s;
	cin >> s;
	vector<string> v = letterCombinations(s);
	for(int i=0; i<v.size(); i++)
		cout << v[i] << " ";
    cout << "\n";
	return 0;
}
