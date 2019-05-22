
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
	int t;
	scanf("%d",&t);
	while(t-->0){
		int n, x, m;
		scanf("%d",&n);
		unordered_map<int, int> hash;
		vector<pair<int, int>> A;
		rep(i,0,n){
			scanf("%d",&x);
			if(hash.find(x) == hash.end()){
				hash[x] = 1;
			}else{
				hash[x]++;
			}
		}
		scanf("%d",&m);
		for(auto it:hash){
			A.pb(mp(it.second, it.first));
		}
		sort(A.begin(), A.end());
		n = A.size();
		for(int i=0; i<n && m>0; i++){
			if(A[i].first <= m){
				m-=A[i].first;
				A[i].first = 0;
			}else{
				A[i].first-=m;
				m=0;
			}
			
		}x = 0;
		for(auto it:A){
			if(it.first>0) x++;
		}
		printf("%d\n",x);
			
	}
	return 0;
}

