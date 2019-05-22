
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
	int n;
	scanf("%d",&n);
	vector<pair<int, int>> v;
	int a, b;
	rep(i,0,n){
		scanf("%d %d",&a,&b);
		v.pb(make_pair(b,a));
	}sort(v.rbegin(), v.rend());
	long long counter = 1, i=0, result = 0;
	while(i<n && counter!=0){
		counter = counter-1+(LL)v[i].first;
		result += (LL)v[i].second; i++;
	}
	printf("%lld\n", result);
	return 0;
}
