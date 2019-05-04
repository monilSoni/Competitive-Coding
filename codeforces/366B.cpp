
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
	int n, k;
	scanf("%d %d",&n,&k);
	vector<int> A(n);
	rep(i,0,n) scanf("%d",&A[i]);
	int start = 0, minn = INT_MAX, sum;
	for(int x = 0; x<k; x++){
		sum = 0;
		for(int i=0; i<n/k; i++){
			sum+=A[(k*i+x)%n];
		}if(sum < minn){
			minn = sum;
			start = x;
		}
	}
	printf("%d\n", start+1);
	return 0;
}

