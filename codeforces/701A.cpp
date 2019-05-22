
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
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define ALL(x) x.begin(),x.end()

int main(){
	int n;
	int x;
	vector<pair<int, int>> cards;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		cards.PB(MP(x, i+1));
	}
	sort(cards.begin(), cards.end());
	for(int i=0; i<n/2; i++){
		printf("%d %d\n", cards[i].S, cards[n-1-i].S);
	}
	return 0;
}
