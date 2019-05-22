vector<vector<int>> func(vector<int> &A, int start){
        vector<vector<int>> v;
        if(A.size()-start == 1){
            vector<int> x; x.push_back(A[start]);
            v.push_back(x);
            return v;
        }else{
        v = func(A, start+1);
        int e = A[start];
        int n = v.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<=v[i].size(); j++){
                vector<int> x = v[i];
                x.insert(x.begin()+j, e);
                v.push_back(x);
            } 
        }
        v.erase(v.begin(), v.begin()+n);
    }
    return v;
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> v = func(A, 0);
    sort(v.begin(), v.end());
    return v;
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

    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > result;
        if (num.size() == 0)
            return result;
        sort(num.begin(), num.end());
        permute(num, 0, result);
        return result;
    }
