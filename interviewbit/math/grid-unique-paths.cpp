#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int a, int b){
	int arr[a][b];
	memset(arr, 0, sizeof(arr[0][0])*a*b);
		
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			if(i == 0 && j == 0) arr[i][j] = 1;
			else if(i == 0) arr[i][j] += arr[i][j-1];
			else if(j == 0) arr[i][j] += arr[i-1][j];
			else arr[i][j] = arr[i-1][j] + arr[i][j-1];
	//		printf("%d ", arr[i][j]);
		} //printf("\n");
	}
	return arr[a-1][b-1];
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", uniquePaths(a, b));
	return 0;
}
