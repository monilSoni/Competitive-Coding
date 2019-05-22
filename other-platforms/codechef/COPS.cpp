
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
	int t, m, x, y;
	scanf("%d",&t);
	rep(i,0,t){
		scanf("%d %d %d",&m,&x,&y);
		bool arr[101]; memset(arr, true, sizeof(arr));
		int count=0, h;
		rep(j,0,m){
			scanf("%d",&h);
			repp(k, max(h-x*y, 1), min(h+x*y, 100)) arr[k]=false;
		}
		repp(j,1,100){
			if(arr[j]) count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
