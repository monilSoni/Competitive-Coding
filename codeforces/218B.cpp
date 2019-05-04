
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
	int n, m, x;
	priority_queue<int> maxpq;
	priority_queue<int, vector<int>, greater<int>> minpq;
	scanf("%d %d",&n,&m);
	for(int i=0; i<m; i++){
		scanf("%d",&x);
		maxpq.push(x); minpq.push(x);
	}
	int maxt=0, mint=0, temp;
	while(n){
		temp = maxpq.top();
		maxt+=temp; maxpq.pop();
		if(temp-1>0) maxpq.push(temp-1);
		temp = minpq.top();
		mint+=temp; minpq.pop();
		if(temp-1>0) minpq.push(temp-1);
		n--;
	}
	printf("%d %d\n", maxt, mint);
	return 0;
}
