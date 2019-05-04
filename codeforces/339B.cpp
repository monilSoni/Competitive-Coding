
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
	int n, m, x, x_prev;
	LL total;
	scanf("%d %d",&n,&m);
	scanf("%d",&x_prev);
	total = x_prev-1;
	rep(0,m-1){
		scanf("%d",&x);
		if(x<x_prev){
			total+=(n-x_prev);
			total+=(x);
		}else{
			total+=(x-x_prev);
		}
		x_prev = x;
	}
	cout << total << "\n";
	return 0;
}

