
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
#define all(x) x.begin(),x.end()

int main(){
	int n, m, min = INT_MAX;
	scanf("%d %d",&n,&m);
	vi v;
	for(int i=0; i<m; i++){
		int x;
		scanf("%d",&x);
		v.pb(x);
	}sort(all(v));
	for(int i=0; i+n-1<m; i++){
		if(v[i+n-1]-v[i]<min){
			min = v[i+n-1]-v[i];
		}
	}
	printf("%d\n",min);
	return 0;
}
