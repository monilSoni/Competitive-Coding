
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
	int n, m, x, d;
	scanf("%d %d %d",&n, &m, &d);
	vector<vector<int>> v(n, vector<int> (m));
	rep(i,0,n){
		rep(j,0,m){
			scanf("%d", &v[i][j]);
		}
	}
	x = v[0][0]%d;
	vector<int> linear;
	rep(i, 0, n){
		rep(j, 0, m){
			if(v[i][j]%d != x){
				printf("-1\n");
				return 0;
			}
			linear.pb(v[i][j]);
		}
	}
	sort(linear.begin(), linear.end());
	int count = 0;
	x=linear[linear.size()/2];
	rep(i, 0, linear.size()){
		count+=abs(linear[i]-x);
	}
	printf("%d\n", count/d);
	return 0;
}

