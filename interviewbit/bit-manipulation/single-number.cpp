
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

int singleNumber(const vector<int> &A) {
    int x;
    for(int i=0; i<A.size(); i++){
        x = x^A[i];
    }
    return x;
}

int main(){
	int n, x;
	vector<int> v;
	scanf("%d",&n);
	_for(i,n){
		scanf("%d",&x);
		v.pb(x);
	}
	printf("%d\n",singleNumber(v));
	return 0;
}

/* The key observation here is that a number when XORed with itself yields zero. Hence if every number but one appears twice, the duplicate will cancel out the original and zero remains. Now when you XOR zero with a number, you get zero itself. */
