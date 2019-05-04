
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
	int n,x;
	scanf("%d",&n);
	vector<vector<int>> v(3);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		v[x-1].pb(i+1);
	}
	int result = min((int)v[0].size(), min((int)v[1].size(), (int)v[2].size()));
	printf("%d\n", result);
	if(result){
		for(int i=0; i<result; i++){
			printf("%d %d %d\n", v[0][i], v[1][i], v[2][i]);
		}
	}
	return 0;
}
