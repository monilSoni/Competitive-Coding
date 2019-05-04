
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

struct customCompare {
	bool operator()(const pair<int, int> &a, const pair<int, int> &b) const{
		return (a.first>b.first || (a.first == b.first && a.second<b.second));
	}
};


int main(){
	int n, k, p, t;
	scanf("%d %d",&n,&k);
	map<pair<int, int>, int, customCompare> hash;
	rep(0,n){
		scanf("%d %d", &p, &t);
		if(hash.find(mp(p,t)) == hash.end()){
			hash[mp(p,t)] = 1;
		}else{
			hash[mp(p,t)]++;
		}
	}
	
	int pos = 1;
	for(auto it:hash){
		if(pos+it.second-1 >= k){
			printf("%d\n", it.second);
			return 0;
		}
		pos+=it.second;
	}
	return 0;
}
