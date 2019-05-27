#include<bits/stdc++.h>
using namespace std;

void printboard(vector<vector<string>> masterboard, int N){
	for(int m=0; m<masterboard.size(); m++){
        cout << "\nSolution: " << m+1 << "\n\n";
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++)
				cout << masterboard[m][i][j] << " ";
            cout << "\n";
		}
        cout << string(2*(N+2), '-') ;
	}
    cout << "\n";
}

bool check(int x, int y, vector<pair<int, int>> b){
    for(auto p : b)
        if(x == p.first || y == p.second || abs(x-p.first) == abs(y-p.second))
            return false;

    return true;
}

void solve(int N, vector<vector<string>> & result, vector<pair<int, int>> b, int x){
    if(x == N){
        vector<string> t(N, string (N, '.'));
        for(auto p : b)
            t[p.first][p.second] = 'Q';
        result.push_back(t);
        return;
    }

    for(int y=0; y<N; y++){
        if(check(x, y, b)){
            b.push_back(make_pair(x, y));
            solve(N, result, b, x+1);
            b.pop_back();
        }
    }

    return;
}

vector<vector<string> > solveNQueens(int A) {
    vector<vector<string>> result;
    vector<pair<int, int>> b;
    solve(A, result, b, 0);
    return result;
}


int main(){
	int n;
	scanf("%d",&n);
	vector<vector<string>> result = solveNQueens(n);
	printboard(result, n);
	return 0;
}
