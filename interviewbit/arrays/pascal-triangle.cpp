vector<vector<int> > Solution::generate(int n) {
    vector<vector<int>> v;
    vector<int> x;
    for(int i=0; i<n; i++){
        x.clear();
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                x.push_back(1);
            }else{
                x.push_back(v[i-1][j-1]+v[i-1][j]);
            }
        }
        v.push_back(x);
    }
    
    return v;
}

/* Not surprisingly enough, my first approach was to dissect the powers of 11 and put them in the array. But fortunately enough, I remembered that doing so will cause trouble in the sense that once the powers of 11 get high not only int but long long int will overflow and will give an incorrect result. I'm sort of proud of myself that I thought of this early enough unlike the previous times :p */
