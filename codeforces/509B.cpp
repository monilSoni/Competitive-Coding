
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

/*Suppose there are two piles with number of pebbles differed by more than k, then there is no solution:*/

int main(){
	int n, k, x;
	scanf("%d %d",&n,&k);
	vector<vector<int>> A(n, vector<int>(k, 0));
	vector<int> K(k, INT_MIN);
	rep(i,0,n){
		scanf("%d",&x);
		rep(j,0,k){
			A[i][j]+=x/k;
			K[j] = max(K[j], A[i][j]);
		}
		if(x%k!=0){
			rep(j,0,x%k){
				A[i][j]++;
				K[j] = max(K[j], A[i][j]);
			}
		}
	}
	rep(i,0,n){
		rep(j,0,k){
			if(K[j]-A[i][j]>1){
				printf("NO\n");
				return 0;
			}
		}
	}

	printf("YES\n");	
	rep(i,0,n){
		rep(j,0,k){
			while(A[i][j]--){
				printf("%d ",j+1);
			}
		}puts("");
	}
	return 0;
}
