
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

int main(){
	clock_t start, stop;
        double t = 0.0;
        assert((start = clock())!=-1);

	int n, k;
	scanf("%d %d",&n,&k);
	if(n==k){
		printf("-1\n");
	}else{
		rep(i,1,n-k){
			printf("%d ",i+1);
		} printf("1 ");
		repp(i, n-k+1, n){
			printf("%d ",i);
		}
		printf("\n");
	}

	stop = clock();
        t = (double) (stop-start)/CLOCKS_PER_SEC;
        //printf("Run time: %f\n", t); // Uncomment the line in order to print the run-time
	return 0;
}
