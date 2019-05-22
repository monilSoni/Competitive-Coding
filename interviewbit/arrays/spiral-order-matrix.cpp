vector<vector<int> > Solution::generateMatrix(int n) {
    vector<vector<int>> a(n, vector<int> (n));
    int count = 1;
    int left = 0; int top = 0;
    int right = n-1; int bottom = n-1;
    while(count <= n*n){
        for(int j=left; j<=right; j++){
            a[top][j] = count++;
        }top++;
        for(int i=top; i<=bottom; i++){
            a[i][right] = count++;
        }right--;
        for(int j=right; j>=left; j--){
            a[bottom][j] = count++;
        }bottom--;
        for(int i=bottom; i>=top; i--){
            a[i][left] = count++;
        }left++;
    }
    return a;
}

