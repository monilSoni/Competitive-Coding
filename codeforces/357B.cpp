
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
	int n, m;
	scanf("%d %d",&n,&m);
	vector<int> color(n, -1);
	int a, b, c;
	rep(i,0,m){
		scanf("%d %d %d",&a,&b,&c);
		a--; b--; c--;
		if(color[a] == -1 && color[b] == -1 && color[c] == -1){
			color[a] = 0;
			color[b] = 1;
			color[c] = 2;
		}else if(color[a]!=-1){
			color[b] = (color[a]+1)%3;
			color[c] = (color[a]+2)%3;
		}else if(color[b]!=-1){
			color[a] = (color[b]+1)%3;
			color[c] = (color[b]+2)%3;
		}else{
			color[a] = (color[c]+1)%3;
			color[b] = (color[c]+2)%3;
		}
	}
	rep(i,0,n){
		printf("%d ",color[i]+1);
	}printf("\n");
	return 0;
}
