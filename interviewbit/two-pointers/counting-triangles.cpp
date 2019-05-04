
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define _for(i,n) for(int i=0; i<n; i++)
#define __for(i,n) for(int i=1; i<=n; i++)
#define REP(i,s,n)  for (int i=(s),_n=(n);i<=_n;i++)
#define FOR(i,n)  for (int i=0,_n=(n);i<_n;i++)
#define REPD(i,e,s)  for (int i=(e),_s=(s);i>=_s;i--)
#define tr(container, it) \
	for (typeof(container.begin()) it=container.begin(); it!=container.end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

int solve(vector<int> &a){
	int count = 0;
	int n = a.size();
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			for(int k=j+1; k<n; k++){
				if(a[i]+a[j] <= a[k])
					break;
				if(a[i]+a[j] > a[k] &&
						a[j]+a[k] > a[i] &&
						a[k]+a[i] > a[j]){
					printf("%d %d %d\n", a[i], a[j], a[k]);
					count++;
				}
			}
		}
	}
	return count;
}

int main(){
	int n, x;
	vector<int> v;
	scanf("%d",&n);
	_for(i,n){
		scanf("%d",&x);
		v.pb(x);
	}
	printf("%d\n",solve(v));
	return 0;
}
