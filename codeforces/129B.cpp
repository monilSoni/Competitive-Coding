
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
	int n, m, x, y;
	scanf("%d %d",&n,&m);
	vector<vector<bool>> v(n+1, vector<bool>(n+1, false));
	rep(i,0,m){
		scanf("%d %d",&x,&y);
		v[x][y] = true;
		v[y][x] = true;
	}
	int result = -1;
	bool ok = false;
	vector<bool> group(n+1, false);
	do{
		result++;
		for(int i=1; i<=n; i++){
			if(!group[i]) continue;
			repp(j,1,n){
				if(v[i][j]){
					v[i][j] = false;
					v[j][i] = false;
					group[i] = false;
					break;
				}
			}
		}
		ok = false;
		for(int i=1; i<=n; i++){
			int count = 0;
			for(int j=1; j<=n; j++){
				if(v[i][j]) count++;
			}
			if(count == 1){
				group[i] = true; ok = true;
			}
		}
	}while(ok);
	printf("%d\n", result);
	return 0;
}
