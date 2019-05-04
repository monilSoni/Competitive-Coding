
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
	int n,m;
	scanf("%d %d",&n,&m);
	vector<string> v(n);
	rep(0, n)
		cin >> v[i];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(v[i][j]!='-'){
				((i%2==0&&j%2==0) || (i%2!=0&&j%2!=0))?printf("B"):printf("W");
			}else{
				printf("-");
			}
		}printf("\n");
	}
	return 0;
}
