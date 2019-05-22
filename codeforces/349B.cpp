
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
	int v;
	scanf("%d",&v);
	int minn = INT_MAX, d;
	vector<int> color(10, 0);
	rep(i,1,10){
		scanf("%d",&color[i]);
		if(color[i]<=minn){
			minn = color[i];
			d = i;
		}
	}
	
	int len = v/minn;
	if(len == 0){
		printf("-1\n"); return 0;
	}
	string result(len, d+'0');
	v = v-len*minn;
	rep(i,0,len){
		for(int p=9; p>=1; p--){
			if(color[p]<=v+minn){
				result[i] = p+'0';
				v = v+minn-color[p];
				break;
			}
		}
	}
	
	cout << result << "\n";

	return 0;
}
