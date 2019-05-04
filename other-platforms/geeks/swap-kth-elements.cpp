
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
	int t;
	scanf("%d",&t);
	while(t-->0){
		int n, k;
		scanf("%d %d",&n,&k);
		vector<int> A(n);
		for(int i=0;i<n;i++) scanf("%d",&A[i]);
		int temp = A[k-1];
		A[k-1] = A[n-k];
		A[n-k] = temp;
		for(int i=0; i<n; i++) printf("%d ",A[i]);
		printf("\n");
	}
	return 0;
}
