
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define endl "\n"
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
	vector<int> v(n), T(n, 1);
	rep(i, 0, n){
		scanf("%d",&v[i]);
	}
	rep(i, 1, n){
		rep(j, 0, i){
			if(v[j]>v[i]){
				T[i] = max(T[i], T[j]+1);
			}
		}
	}

	rep(i, 0, n){
		cout << T[i] << " ";
	}
	cout << endl;
	return 0;
}
