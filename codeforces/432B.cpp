
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
#define f first
#define s second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

int main(){
	long long n;
	scanf("%lld",&n);
	unordered_map<LL, LL> hashH, hashA;
	vector<pair<LL, LL>> result(n, mp(n-1,n-1)), kits(n, mp(0,0));
	rep(i,0,n){
		scanf("%lld %lld", &kits[i].f, &kits[i].s);
		if(hashH.find(kits[i].f) == hashH.end()) hashH[kits[i].f] = 1;
		else hashH[kits[i].f]++;
		
		if(hashA.find(kits[i].s) == hashA.end()) hashA[kits[i].s] = 1;
		else hashA[kits[i].s]++;
	}

	rep(i,0,n){
		int x = hashH[kits[i].s];
		if(kits[i].f == kits[i].s) x--;
		result[i].f+=x;
		result[i].s-=x;
	}
	
	rep(i,0,n) printf("%lld %lld\n",result[i].f, result[i].s);
	return 0;
}
