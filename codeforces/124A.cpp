
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

int main(){
	int a, n, b;
	scanf("%d %d %d", &n, &a, &b);
	printf("%d\n", n - max(a + 1, n - b) + 1);
	return 0;
}


/* Alternative and better method is min(n-a, b+1). That is because Petr can occupy n-a or greater positions but if the number of people that are behind him exceeds b then it will be in valid. Now to make sure if the number of people behind him remain <=b, we see that he can occupy n, n-1...upto the number where there are only b people behind him. That will make it b+1 positions. So we have two options n-a or b+1. And minimum would be the answer.*/
