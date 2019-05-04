
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(s,n) for(int i=s; i<n; i++)
#define repp(s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main(){
	int s, n;
	scanf("%d %d",&s, &n);
	vector<pair<int, int>> v;
	for(int i=0; i<n; i++){
		int x, y;
		scanf("%d %d",&x, &y);
		v.push_back(make_pair(x,y));
	} sort(all(v));
	for(int i=0; i<n; i++){
		if(s<=v[i].first){
			printf("NO\n");
			return 0;
		}else{
			s+=v[i].second;
		}
	}
	printf("YES\n");
	return 0;
}
