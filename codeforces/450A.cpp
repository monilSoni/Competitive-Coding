//You can simply simulate it or find the last maximum ceil(ai / m).



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
#define tr(container, it) \
	for (typeof(container.begin()) it=container.begin(); it!=container.end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

int main(){
	queue<pair<int, int>> q;
	int n, m, x;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		q.push(make_pair(x, i+1));
	}
	while(q.size()>1){
		if(q.front().first>m)
			q.push(make_pair(q.front().first-m, q.front().second));
		q.pop();
	}
	cout << q.front().second << "\n";
	return 0;
}
