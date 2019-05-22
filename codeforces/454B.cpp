
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
	int n, pivot, count=0;
	scanf("%d",&n);
	int A[n];
	rep(i,0,n) scanf("%d",&A[i]);
	rep(i,0,n){
		if(A[i]>A[(i+1)%n]){
			count++;
			pivot = i+1;
		}
	}
	if(count==0){
		printf("0\n");
	}else if(count==1){
		printf("%d\n",n-pivot);
	}else{
		printf("-1\n");
	}
	return 0;
}
