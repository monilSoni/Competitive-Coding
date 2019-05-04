
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(s,n) for(int i=s; i<n; i++)
#define repp(s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

/* editorial Suppose we are given the number N. We can observe that for big enough consecutive numbers, the array is always hungry. For example, we can print 3 * N + 0, 3 * N + 1, 3 * N + 2, …, 3 * N + (N – 1). Magic, isn’t it? Why does it work now? Pick an arbitrary a[i]. The solution would be bad if one of numbers 2 * a[i], 3 * a[i], 4 * a[i] and so on would be in a[] array. However, it will never happen. The smallest multiple from that ones will be 2 * 3 * N = 6 * N. There is not possible to obtain a smallest multiple than that one. On the other hand, the biggest number from a[] array would be 3 * N + N – 1 = 4 * N — 1. Since smallest multiple is bigger than biggest term of the array, it (and of course other multiples bigger than it) will never exist in a[] array. So the above solution is correct also. */

int main(){
	int n;
	scanf("%d",&n);
	rep(0, n){
		printf("%d ",3*n+i);
	}printf("\n");
	return 0;
}
