
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

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int t, n, x, i;
	vector<int> v;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n); v.clear();
		bool ok = false;
		stack<pair<int, int>> s;
		rep(j,0,n){
			scanf("%d",&x);
			v.pb(x);
		}
		s.push(mp(v[n-1], n-1));
		for(i=n-2; i>=0; i--){
			if(v[i] < s.top().first){
				ok = true;
				break;
			}else{
				s.push(mp(v[i], i));
			}
		}
		if(ok){
			int maxInd = s.top().second;
			while(!s.empty()){
				if(s.top().first > v[i] && s.top().first < v[maxInd]) maxInd = s.top().second;
				s.pop();
			}
			swap(&v[maxInd], &v[i]);
			sort(v.begin()+i+1, v.end());
			rep(j, 0, n) printf("%d",v[j]);
		}else{
			printf("-1");
		} puts("");
		while(!s.empty()) s.pop();
		v.clear();
	}
	return 0;
}

