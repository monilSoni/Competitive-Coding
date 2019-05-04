
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
	int n, m, maxx = INT_MIN, streak=1;
	scanf("%d %d",&n,&m);
	if(m == 0){
		printf("YES\n"); 
		return 0;
	}
	vector<int> s(m);
	rep(i,0,m) scanf("%d",&s[i]);
	sort(all(s));
	if(s[0] == 1 || s[m-1] == n) printf("NO\n");
	else{
		rep(i,1,m){
			if(s[i] == s[i-1]+1){
				streak++;
				maxx = max(maxx, streak);
			}else{
				maxx = max(maxx, streak);
				streak=1;
			}
		}
		if(maxx<3) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
