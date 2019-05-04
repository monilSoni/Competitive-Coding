
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
#define ALL(x) x.begin(),x.end()

int main(){
	int n;
	scanf("%d",&n);
	vector<int> v(n);
	rep(0,n) scanf("%d",&v[i]);
	sort(v.begin(), v.end());
	if(v[n-1]!=4 && v[n-1]!=6){
		printf("-1\n");
		return 0;
	}
	int one = upper_bound(v.begin(), v.end(), 1) - lower_bound(v.begin(), v.end(), 1);
	int two = upper_bound(v.begin(), v.end(), 2) - lower_bound(v.begin(), v.end(), 2);
	int three = upper_bound(v.begin(), v.end(), 3) - lower_bound(v.begin(), v.end(), 3);
	int four = upper_bound(v.begin(), v.end(), 4) - lower_bound(v.begin(), v.end(), 4);
	int six = upper_bound(v.begin(), v.end(), 6) - lower_bound(v.begin(), v.end(), 6);
	if(four+six==one && (four<=two && two+three == four+six)){
		for(int i=0; i<four; i++){
			printf("1 2 4\n");
			two--;
		}
		for(int i=0; i<two; i++){
			printf("1 2 6\n");
		}
		for(int i=0; i<three; i++){
			printf("1 3 6\n");
		}
	}else{
		printf("-1\n");
	}
	return 0;
}
