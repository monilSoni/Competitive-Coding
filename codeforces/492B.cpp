
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
	int n, l, x;
	scanf("%d %d",&n,&l);
	vector<double> v(n);
	rep(i,0,n) scanf("%lf",&v[i]);
	sort(v.begin(), v.end());
	double maxx = v[0];
	rep(i,0,n){
		if(i==n-1){
			maxx = max(maxx, l-v[i]);
		}else{
			maxx = max(maxx, (v[i+1]-v[i])/2);
		}
	}
	printf("%lf\n", maxx);
	return 0;
}
