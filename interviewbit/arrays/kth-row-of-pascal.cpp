vector<int> Solution::getRow(int n) {
    vector<int> x, y;
    for(int i=0; i<=n; i++){
        x = y;
        y.clear();
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                y.push_back(1);
            }else{
                y.push_back(x[j-1]+x[j]);
            }
        }
    }
    return y;
}

