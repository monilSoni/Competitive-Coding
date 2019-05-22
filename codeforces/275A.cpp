#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int>> a(3, vector<int> (3, 0));
	vector<vector<int>> result(3, vector<int> (3, 0));
	int x;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d",&x);
			a[i][j] = x;
			result[i][j] = x;
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i>0) result[i][j]+=a[i-1][j];
			if(i<2) result[i][j]+=a[i+1][j];
			if(j>0) result[i][j]+=a[i][j-1];
			if(j<2) result[i][j]+=a[i][j+1];
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			(result[i][j]&1)?printf("0"):printf("1");
		}printf("\n");
	}
	return 0;
}
	
