
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pii;

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
	int n; scanf("%d",&n);
	int m; scanf("%d",&m);
	vector<int> a(n), b(n);
	rep(i,0,n){
		scanf("%d",&a[i]);
		if(a[i]<=1){
			printf("-1\n");
			return 0;
		}
	}
	rep(i,0,n){
		scanf("%d",&b[i]);
		if(b[i]<=1){
			printf("-1\n");
			return 0;
		}
	}
	double result = m;
	result += result/(a[0]-1);
	rep(i,1,n){
		result+=result/(a[i]-1);
		result+=result/(b[i]-1);
	}
	result += result/(b[0]-1);
	printf("%0.10f\n", result-m);
	return 0;
}
