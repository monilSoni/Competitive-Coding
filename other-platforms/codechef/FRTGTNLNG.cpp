
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
	int t, n, k, l;
	string str;
	scanf("%d",&t);
	rep(i,0,t){
		scanf("%d %d",&n,&k);
		vector<string> dict(n);
		vector<bool> result(n, false);
		rep(j,0,n){
			cin >> dict[j];
		}
		rep(j,0,k){
			scanf("%d",&l);
			rep(p,0,l){
				cin >> str;
				auto it = dict.begin();
				if((it = find(dict.begin(), dict.end(), str))!=dict.end())
					result[it-dict.begin()]=true;
			}
		}
		rep(j,0,n){
			(result[j])?printf("YES\n"):printf("NO\n");
		}
	}
	return 0;
}
