
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
	vector<string> v(4);
	int b=0, w=0;
	rep(0,4){
		cin >> v[i];
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			b = 0; w = 0;
			//Consider 4 block square
			(v[i][j] == '#')?b++:w++;
			(v[i][j+1] == '#')?b++:w++;
			(v[i+1][j] == '#')?b++:w++;
			(v[i+1][j+1] == '#')?b++:w++;
			if((b==4 && w==0) || (b==0 && w==4) || (b==3 && w==1) || (w==3 && b==1)){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}
