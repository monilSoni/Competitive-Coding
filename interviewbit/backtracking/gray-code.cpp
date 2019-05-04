vector<string> func(int n){
    vector<string> v;
    if(n==1){
        v.push_back("0");
        v.push_back("1");
        return v;
    }else{
        v = func(n-1);
        int n = v.size();
        for(int i=0; i<n; i++){
            v.push_back("0"+v[i]);
        }
        for(int i=n-1; i>=0; i--){
            v.push_back("1"+v[i]);
        }
        v.erase(v.begin(), v.begin()+n);
        return v;
    }
}

vector<int> Solution::grayCode(int A) {
    vector<string> v = func(A);
    vector<int> result;
    int n = v.size();
    for(int i=0; i<n; i++){
        result.push_back(stoi(v[i], nullptr, 2));
    }
    return result;
}

