
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
	int n, x, y;
	int minx=INT_MAX, maxy=INT_MIN, ans;
	vector<pair<int, int>> v;
	scanf("%d",&n);
	rep(0,n){
		scanf("%d %d",&x,&y);
		v.pb(mp(x,y));
		if(x<minx) minx = x;
		if(y>maxy) maxy = y;
	}
	for(int i=0; i<n; i++){
		if(v[i].first==minx && v[i].second==maxy){
			printf("%d\n",i+1);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
	
	
	
