
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
	vector<int> A(n), B(m);
	rep(i,0,n) scanf("%d",&A[i]);
	rep(i,0,m) scanf("%d",&B[i]);
	sort(all(A));
	sort(all(B));
	unordered_set<int> s; auto it = B.begin();
	int pointer = 0;
	rep(i,0,n){
		if((it  = lower_bound(B.begin()+pointer, B.end(), A[i])) != B.end()){
			s.insert(it-B.begin());
			pointer = it-B.begin()+1;
		}
	}
	printf("%ld\n",n-s.size());
	return 0;
}
