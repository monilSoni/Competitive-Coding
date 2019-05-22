
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
	int n, x;
	map<int, vector<int>> hash;
	scanf("%d",&n);
	rep(0,n){
		scanf("%d",&x);
		hash[x].pb(i);
	}
	vector<pair<int, int>> result;
	for(auto itr = hash.begin(); itr!=hash.end(); itr++){
		vector<int> v = itr->second;
		if(v.size()==1) result.pb(mp(itr->first,0));
		else if(v.size() == 2) result.pb(mp(itr->first,v[1]-v[0]));
		else{
			bool isAP = true;
			for(int i=2; i<v.size(); i++){
				if(v[i]-v[i-1] != v[i-1]-v[i-2]){
					isAP = false;
					break;
				}
			}
			if(isAP) result.pb(mp(itr->first, v[1]-v[0]));
		}
	}
	printf("%ld\n",result.size());
	for(int i=0; i<result.size(); i++){
		printf("%d %d\n", result[i].first, result[i].second);
	}
	return 0;
}
