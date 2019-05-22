
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
	int n, x;
	scanf("%d",&n);
	vector<pair<int, int>> v(n); 
	rep(i,0,n) scanf("%d",&x), v[i]=mp(x,i);
	
	if(n<2 || (n==2 && v[0].first==v[1].first)) printf("-1\n");
	else{
		sort(v.begin(), v.end());
		printf("1\n%d\n",v[0].second+1);
	}
	return 0;
}

