
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
	int n, x, y, count=0;
	vector<pair<int, int>> v;
	scanf("%d",&n);
	rep(i,0,n){
		scanf("%d %d",&x,&y);
		v.pb(mp(x,y));
	}
	rep(i,0,n){
		bool open = true;
		rep(j,0,n){
			if(i!=j && v[j].second == v[i].first) open = false;
		}if(open) count++;
	}
	printf("%d\n",count);
	return 0;
}
