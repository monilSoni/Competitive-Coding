
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
#define f first
#define s second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

bool interval(int c, int d, vector<pair<int, int>> ab){
	rep(i,0,ab.size()){
		if(!(d<ab[i].f || ab[i].s<c)) return true; 
	}
	return false;
}

int main(){
	int p, q, l, r, count=0;
	scanf("%d %d %d %d",&p,&q,&l,&r);
	vector<pair<int, int>> ab(p), cd(q);
	rep(i,0,p) scanf("%d %d",&ab[i].f,&ab[i].s);
	rep(i,0,q) scanf("%d %d",&cd[i].f,&cd[i].s);
	repp(t,l,r){
		rep(i,0,q){
			if(interval(cd[i].f+t, cd[i].s+t, ab)) {
				count++;
				break;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}
