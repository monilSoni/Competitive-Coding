
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(vector<int> &A, int start, int end){
	int wall = start;
	int pivot = A[end];
	rep(i,start,end){
		if(A[i]<pivot){
			swap(&A[i], &A[wall]);
			wall++;
		}
	}

	swap(&A[wall], &A[end]);
	return wall;
}

void quickSort(vector<int> &A, int start, int end){
	if(start>=end) return;
	int pivot = partition(A, start, end);
	quickSort(A, start, pivot-1);
	quickSort(A, pivot+1, end);
}

int main(){
	int n;
	scanf("%d",&n);
	vector<int> arr(n);
	rep(i,0,n) scanf("%d",&arr[i]);

	//Quick Sort
	quickSort(arr, 0, arr.size()-1);
	
	rep(i,0,n) printf("%d ",arr[i]);
	puts("");
	return 0;
}
