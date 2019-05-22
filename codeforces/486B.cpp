
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

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	set<int> row, col;
	vector<vector<int>> A(m, vector<int>(n,1)), B(m, vector<int>(n,1)), B0(m, vector<int>(n,1));
	rep(i,0,m) rep(j,0,n) {
		scanf("%d",&B[i][j]);
		if(B[i][j] == 0){
			row.insert(i);
			col.insert(j);
		}
	}

	for(auto it : row) rep(j,0,n) A[it][j] = 0;
	for(auto it : col) rep(i,0,m) A[i][it] = 0;

	rep(i,0,m) {
		rep(j,0,n){
			B0[i][j]=0;
			rep(k,0,n) B0[i][j] |= A[i][k];
			rep(k,0,m) B0[i][j] |= A[k][j];
			if(B0[i][j]!=B[i][j]){
				printf("NO\n");
				return 0;
			}
		}
	}

	printf("YES\n");
	rep(i,0,m) {
		rep(j,0,n){
			printf("%d ",A[i][j]);	
		}
		puts("");
	}

	return 0;
}

