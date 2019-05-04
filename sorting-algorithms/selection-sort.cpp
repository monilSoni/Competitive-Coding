
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

int main(){
	int n;
	scanf("%d",&n);
	vector<int> arr(n);
	rep(i,0,n) scanf("%d",&arr[i]);

	//Selection Sort
	rep(i,0,n){
		int min = arr[i], min_i = i;
		rep(j,i+1,n){
			if(arr[j]<min){
				min = arr[j];
				min_i = j;
			}
		}
		swap(&arr[i], &arr[min_i]);
	}

	rep(i,0,n) printf("%d ",arr[i]);
	puts("");
	return 0;
}
