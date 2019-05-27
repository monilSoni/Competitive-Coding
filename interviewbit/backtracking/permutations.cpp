void solve(vector<int> &A, vector<vector<int>> &result, vector<bool> visited, vector<int> p){
    if(p.size() == A.size()){
        result.push_back(p);
        return;
    }

    for(int i=0; i<A.size(); i++){
        if(!visited[i]){
            p.push_back(A[i]);
            visited[i] = true;
            solve(A, result, visited, p);
            visited[i] = false;
            p.pop_back();
        }
    }

    return;
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<vector<int>> result;
    vector<int> p;
    vector<bool> visited(A.size(), false);
    solve(A, result, visited, p);
    return result;
}


/* Editorial Solution */
void permute(vector<int> &num, int start, vector<vector<int> > &result) {
        if (start == num.size() - 1) {
            result.push_back(num);
            return;
        }
        for (int i = start; i < num.size(); i++) {
            swap(num[start], num[i]);
            permute(num, start + 1, result);
            swap(num[start], num[i]);
        }
}
