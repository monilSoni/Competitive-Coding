
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

void merge(vector<int> &arr, int start, int mid, int end){
	vector<int> aux;
	int i=start, j=mid+1;
	repp(a, start, end){
		if(i>mid && j<=end)
			aux.pb(arr[j++]);
		else if(j>end)
			aux.pb(arr[i++]);
		else if(arr[i]<arr[j])
			aux.pb(arr[i++]);
		else
			aux.pb(arr[j++]);
	} 
	rep(i,0,aux.size()){
		arr[start++] = aux[i];
	}
}

void mergeSort(vector<int> &arr, int start, int end){
	if(start>=end) return;
	int mid = start+(end-start)/2;
	mergeSort(arr, start, mid);
	mergeSort(arr, mid+1, end);
	merge(arr, start, mid, end);
}

int main(){
	int n;
	scanf("%d",&n);
	vector<int> arr(n);
	rep(i,0,n) scanf("%d",&arr[i]);

	//Merge Sort
	mergeSort(arr, 0, arr.size()-1);
	
	rep(i,0,n) printf("%d\n",arr[i]);
	puts("");
	return 0;
}
