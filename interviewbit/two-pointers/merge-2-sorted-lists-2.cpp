
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define _for(i,n) for(int i=0; i<n; i++)
#define __for(i,n) for(int i=1; i<=n; i++)
#define REP(i,s,n)  for (int i=(s),_n=(n);i<=_n;i++)
#define FOR(i,n)  for (int i=0,_n=(n);i<_n;i++)
#define REPD(i,e,s)  for (int i=(e),_s=(s);i>=_s;i--)
#define tr(container, it) \
	for (typeof(container.begin()) it=container.begin(); it!=container.end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()


void solve(vector<int> &a, vector<int> &b){
	int ap = 0;
	int bp = 0;
	for(int i=0; i<a.size(); i++){
		if(b[bp]<a[i] && bp < b.size())
			a.insert(a.begin()+i, b[bp++]);
	}
	if(bp < b.size() && b[bp]>=a[a.size()-1]){
		for(int i=bp; i<b.size(); i++){
			a.insert(a.begin()+a.size(), b[i]);
		}
	}
	_for(i,a.size())
		printf("%d ", a[i]);
}

int main(){
	int n,x;
	vector<int> a,b;
	scanf("%d",&n);
	_for(i,n){
		scanf("%d",&x);
		a.pb(x);
	}
	scanf("%d", &n);
	_for(i,n){
		scanf("%d",&x);
		b.pb(x);
	}
	solve(a,b);
	return 0;
}
