
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
	vl A(n);
	rep(i,0,n) scanf("%lld",&A[i]);
	if(A.size() == 1 || A.size()==2){
		printf("%ld\n",A.size());
		return 0;
	}
	int count = 2, maxx = 2;
	rep(i,2,n){
		if(A[i] == A[i-1]+A[i-2]){
			count++;
			maxx = max(maxx, count);
		}else{
			maxx = max(maxx, count);
			count = 2;
		}
	}
	printf("%d\n",maxx);
	return 0;
}
