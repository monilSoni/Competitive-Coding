
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
	int n, m;
	scanf("%d %d",&n,&m);
	vector<string> grid(n);
	rep(i,0,n){
		cin >> grid[i];
	}
	int count = 0;
	rep(i,0,n){
		rep(j,0,m){
			if(grid[i][j] == 'W'){
				if(i>0 && grid[i-1][j] == 'P'){
					count++;
					continue;
				}else if(j>0 && grid[i][j-1] == 'P'){
					count++;
					continue;
				}else if(i<n-1 && grid[i+1][j] == 'P'){
					count++;
					continue;
				}else if(j<m-1 && grid[i][j+1] == 'P'){
					count++;
					continue;
				}
			}
		}
	}
	printf("%d\n", count);
	return 0;
}
