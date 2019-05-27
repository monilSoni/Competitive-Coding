#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &A, vector<int> s, vector<vector<int>> &result, int x){
    if(x == A.size())
        return;

    for(int i=x; i<A.size(); i++){
        s.push_back(A[i]);
        result.push_back(s);
        solve(A, s, result, i+1);
        s.pop_back();
    }
    return;
}

vector<vector<int> > subsets(vector<int> &A) {
    vector<vector<int>> result;
    vector<int> s;
    result.push_back(s);
    sort(A.begin(), A.end());
    solve(A, s, result, 0);
    return result;
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
