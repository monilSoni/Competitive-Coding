
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
	int n,x;
	unordered_map<int, vector<int>> hash;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d",&n);
	rep(0, 2*n){
		scanf("%d",&x);
		hash[x].push_back(i+1);
	}
	for(auto it: hash){
		if(it.second.size()%2!=0){
			printf("-1\n");
			return 0;
		}
	}
	for(auto it:hash){
		for(int i=0; i<it.second.size()-1; i+=2){
			printf("%d %d\n", it.second[i], it.second[i+1]);
		}
	}
	return 0;
}
