
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
	long long x, y, n;
	scanf("%lld %lld",&x, &y);
	long long arr[6];
	arr[0] = x-y;
	arr[1] = x;
	arr[2] = y;
	arr[3] = y-x;
	arr[4] = -1*x;
	arr[5] = -1*y;
	scanf("%lld",&n);
	while(arr[n%6]<0){
		arr[n%6]+=MOD;
	}
	printf("%lld\n",arr[n%6]%MOD);
	return 0;
}
