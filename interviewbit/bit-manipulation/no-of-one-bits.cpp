
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define _for(i,n) for(int i=0; i<n; i++)
#define __for(i,n) for(int i=1; i<=n; i++)
#define REP(i,s,n)  for (int i=(s),_n=(n);i<=_n;i++)
#define FOR(i,n)  for (int i=0,_n=(n);i<_n;i++)
#define REPD(i,e,s)  for (int i=(e),_s=(s);i>=_s;i--)
#define tr(container, it) \
	for (typeof(container.begin()) it=container.begin(); it!=container.end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

int numSetBits(unsigned int A) {
    int count = 0;
    while(A>0){
        if(A&1) count++;
        A = A>>1 ;
    }
    return count;
}

int main(){
	unsigned int n;
	scanf("%u",&n);
	printf("%d\n",numSetBits(n));
	return 0;
}

/* This special solution uses a trick which is normally used in bit manipulations.
Notice what x - 1 does to bit representation of x.
x - 1 would find the first set bit from the end, and then set it to 0, and set all the bits following it.

Which means if x = 10101001010100
                              ^
                              |
                              |
                              |

                       First set bit from the end

Then x - 1 becomes 10101001010(011)

All other bits in x - 1 remain unaffected.
This means that if we do (x & (x - 1)), it would just unset the last set bit in x (which is why x&(x-1) is 0 for powers of 2).

unsigned int total_ones = 0;
            while (x != 0) {
                x = x & (x-1);
                cout << x << "\n";
                total_ones++;
            }
            return total_ones;
*/
