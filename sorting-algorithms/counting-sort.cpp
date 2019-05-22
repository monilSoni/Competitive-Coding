
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
	int n, max =INT_MIN;
	scanf("%d",&n);
	vector<int> arr(n);
	rep(i,0,n){
		scanf("%d",&arr[i]);
		if(arr[i]>max) max=arr[i];
	}
	//Counting Sort
	vector<int> aux(max+1, 0);
	rep(i,0,n){
		aux[arr[i]]++;
	}

	int j=0;
	rep(i,0,max+1){
		while(aux[i]--){
			arr[j++]=i;
		}
	}

	rep(i,0,n) printf("%d ",arr[i]);
	puts("");
	return 0;
}
