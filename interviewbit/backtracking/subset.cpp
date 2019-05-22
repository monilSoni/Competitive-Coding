#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > func(vector<int> &s) {
    if(s.size() == 1){
        vector<vector<int>> v;
        v.push_back(s);
        return v;
    }
    vector<int> x(s.begin()+1, s.end());
    vector<vector<int>> v = func(x);
    int n = v.size();
    for(int i=0; i<n; i++){
        x = v[i];
        x.insert(x.begin(), s[0]);
        v.push_back(x);
    }
    x.clear(); x.push_back(s[0]);
    v.push_back(x);
    return v;
}


vector<vector<int> > subsets(vector<int> &s) {
    sort(s.begin(), s.end());
    vector<vector<int>> v;
    if(s.size() == 0){
        vector<int> x; x.clear();
        v.push_back(x);
    }else{
    v = func(s);
    vector<int> x; x.clear();
    v.push_back(x);
    reverse(v.begin(), v.end());
    }
    return v;
}

int main(){
	int n, x;
	vector<int> v;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	vector<vector<int>> ans = subsets(v);
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<ans[i].size(); j++){
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
