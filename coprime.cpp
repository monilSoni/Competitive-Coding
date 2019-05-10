
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pii;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

/* All pairs of positive coprime numbers (m,n) (with m>n) can be arranged in two disjoint complete ternary trees, one tree starting from (2,1) (for even-odd and odd-even pairs), and the other tree starting from (3,1).The children of each vertex (m,n) are generated as follows:

    Branch 1: (2m-n,m)
    Branch 2: (2m+n,m)
    Branch 3: (m+2n,n)

This scheme is exhaustive and non-redundant with no invalid members. 
*/

int main(){
	int m=2, n=1;
	for(int i=0; i<20; i++){
		printf("%d %d\n", m, n);
		int temp = m;
		m = 2*m-n;
		n = temp;
	}
	return 0;
}
