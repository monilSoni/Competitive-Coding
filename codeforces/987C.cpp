#include <bits/stdc++.h>
using namespace std;

int min(int dp[][3], int arr[], int index, int col){
	int minimum = INT_MAX;
	for(int i=0; i<index; i++){
		if(arr[index] <= arr[i]) continue;
		if(dp[i][col] < minimum) minimum = dp[i][col];
	}
	return minimum;
}

int main(){
	int n;
	scanf("%d",&n);
	int dp[n][3];
	int arr[n];
	for(int i=0; i<n; i++){
                for(int j=0; j<3; j++)
			dp[i][j] = INT_MAX;
        }
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<n; i++)
		scanf("%d", &dp[i][0]);
	for(int i=1; i<n; i++){
		for(int j=1; j<3; j++){
			int rest = min(dp, arr, i, j-1);
			if(rest == INT_MAX)	dp[i][j] = INT_MAX;
			else	dp[i][j] = dp[i][0] + rest;
		}
	}

	int minimum = INT_MAX;
	for(int i=0; i<n; i++){
		if(dp[i][2] < minimum) minimum = dp[i][2];
	}

	if(minimum == INT_MAX) printf("-1\n");
	else printf("%d\n", minimum);

	return 0;
}
