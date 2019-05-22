
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

int main(){
	int n;
	scanf("%d",&n);
	vector<int> arr(n);
	rep(i,0,n) scanf("%d",&arr[i]);

	//Insertion Sort
	rep(i,1,n){
		int copy = arr[i], j=i-1;
		while(j>=0 && arr[j]>copy){
			arr[j+1] = arr[j];
			j--;
		} 
		arr[j+1] = copy;
	}

	rep(i,0,n) printf("%d ",arr[i]);
	puts("");
	return 0;
}
