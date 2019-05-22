#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> prettyPrint(int n){
	vector<vector<int>> v(2*n - 1, vector<int>(2*n - 1));
	for(int i=n, low=0, high=2*n - 1; i>0, low<=high; i--, low++, high--){
		for(int j=low; j<high; j++){
			if(j==low || j==high-1){
				for(int k=low; k<high; k++){
					v[j][k] = i;
				}
			}else{
				v[j][low] = i;
				v[j][high-1] = i;
			}
		}
	}
	return v;
}


int main(){
	int n;
	scanf("%d", &n);
	vector<vector<int>> v = prettyPrint(n);
	for(int i=0; i<v.size(); i++){
		for(int j=0; j<v[0].size(); j++){
			printf("%d ", v[i][j]);
		} printf("\n");
	}
	return 0;
}

