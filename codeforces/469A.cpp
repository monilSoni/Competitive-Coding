
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
#define CLOCK_INIT clock_t start, stop; double t = 0.0; assert((start = clock())!=-1);
#define CLOCK_END stop = clock(); t = (double) (stop-start)/CLOCKS_PER_SEC; printf("Run time: %f\n", t); 

int main(){
	int n, x, p;
	scanf("%d",&n);
	vector<bool> A(n, false);
	scanf("%d",&p);
	rep(i,0,p){
		scanf("%d",&x);
		A[x-1] = true;
	}
	scanf("%d",&p);
	rep(i,0,p){
		scanf("%d",&x);
		A[x-1] = true;
	}
	bool ok = true;
	rep(i,0,n){
		if(!A[i]) ok = false;
	}
	(ok) ? printf("I become the guy.\n") : printf("Oh, my keyboard!\n") ;
	return 0;
}
