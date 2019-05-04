
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

/*The answer is just sumW − N * minW, where sumW is the sum of all W[i] and minW is the minimum over all W[i]. See author's solution and tester's first solution as a reference.
EXPLANATION:

The operation can be treated as follows: we at first decrease salary of some worker by 1 and then increase salaries of all workers by 1. But why do we need to do the second part? Since we want all salaries to be equal the second part of the operation could be simply ignored. So we may assume that at each operation we decrease salary of some worker by 1.

Now if we have some salary greater the minimum salary then without applying operation to it we can't achieve the goal in any way - the minimum could only decreases during operations so this salary will be always not equal to the minimum one. Hence we need to apply at least W[i] − minW operations for the i-th worker. The summation of this over all i is exactly sumW − N * minW. But, clearly, applying exactly W[i] − minW operations to the i-th worker (for all i) makes all salaries to be equal to minW, which is our goal. Therefore, this number of operations is also sufficient. Hence it is the answer as stated above.
*/

int main(){
	int t, n;
	scanf("%d",&t);
	rep(i,0,t){
		scanf("%d",&n);
		int arr[n] = {0}, min=INT_MAX, sum=0;
		rep(j,0,n){
			scanf("%d",&arr[j]);
			if(arr[j]<min) min=arr[j];
			sum+=arr[j];
		}
		printf("%d\n", sum-n*min);
	}
	return 0;
}

