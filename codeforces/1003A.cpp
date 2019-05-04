
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
	int n, x, maxx = INT_MIN;
	scanf("%d",&n);
	vector<int> A(101, 0);
	rep(i,0,n){
		scanf("%d",&x);
		A[x]++;
		maxx = max(maxx, A[x]);
	}
	printf("%d\n",maxx);
	return 0;
}
