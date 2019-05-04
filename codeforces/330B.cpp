
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
	int n, m, x, y, i;
	scanf("%d %d",&n,&m);
	vector<bool> centre(n+1, true);
	rep(i,0,m){
		scanf("%d %d",&x,&y);
		centre[x] = false;
		centre[y] = false;
	}
	rep(i,1,n+1){
		if(centre[i]){
			x = i;
			break;
		}
	}
	printf("%d\n", n-1);
	repp(i,1,n){
		if(i!=x){
			printf("%d %d\n",x,i);
		}
	}
	return 0;
}

