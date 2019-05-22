vector<vector<int> > Solution::diagonal(vector<vector<int> > &a) {
    vector<vector<int>> v;
    vector<int> x;
    int n = a.size(), i;
    for(int sum=0; sum<2*n-1; sum++){
        (sum>=n)?i = sum-n+1:i=0;
        while(i<n && sum-i>=0){ // In a haste I did not bother to dry run the code but fortunately I thought of sum-i being less than zero! BEWARE of the negative index
            x.push_back(a[i][sum-i]);
            i++;
        }
        v.push_back(x);
        x.clear();
    }
    
    return v;
}

