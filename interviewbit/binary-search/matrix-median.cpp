#include <bits/stdc++.h>
using namespace std;

int matrixMedian(vector<vector<int>> &a){
	//Complete the code
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
	printf("%d\n", matrixMedian(v));
	return 0;
}

