
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
	int n;
	scanf("%d",&n);
	vector<int> v(n);
	rep(i,0,n) scanf("%d",&v[i]);
	int result = 1;
	rep(i,0,n){
		int l=i-1, r=i+1;
		while(l>=0 && v[l]<=v[l+1]){
			l--;
		}
		while(r<n && v[r]<=v[r-1]){
			r++;
		}
		result = max(result, r-l-1);
	}
	printf("%d\n", result);
	return 0;
}
		
