
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
	int n, x, y, hx, hy, INF=0;
	unordered_set<double> hash;
	scanf("%d %d %d",&n, &hx, &hy);
	rep(i,0,n){
		scanf("%d %d",&x,&y);
		if(hx-x == 0) INF++;
		else{
			hash.insert((y-hy)/(double)(x-hx));
		}
	}
	int result = hash.size();
	if(INF>0) result++;
	printf("%d\n", result);
	return 0;
}
