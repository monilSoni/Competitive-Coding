#include <bits/stdc++.h>
using namespace std;

int searchMatrix(vector<vector<int>> &a, int b){
	int rows = a.size();
        int cols = a[0].size();
        int low = 0;
        int high = rows*cols - 1;
        while(low<=high){
                int mid = low + (high-low)/2;
                int mid_row = mid/(cols);
                int mid_col = mid - mid_row*(cols);
                if(a[mid_row][mid_col] == b)
                        return 1;
                else if(a[mid_row][mid_col] < b)
                        low = mid+1;
                else
                        high = mid-1;
        }
        return 0;
}

int main(){
	int m,n;
	int x;
	vector<vector<int>> v;
	scanf("%d %d", &m, &n);
	for(int i=0; i<m; i++){ 
		vector<int> row;
		for(int j=0; j<n; j++){
			scanf("%d",&x);
			row.push_back(x);// I don't know how to push_back here!!
		}
		v.push_back(row);
	}	
	scanf("%d", &x);
	printf("%d\n",  searchMatrix(v,x));
	return 0;
}

