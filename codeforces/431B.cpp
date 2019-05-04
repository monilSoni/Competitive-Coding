
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
	long long a[5][5];
	vector<pair<long long, pair<int, int>>> v;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			scanf("%lld",&a[i][j]);
		}
	}
	long long p[6], ans = -1, temp;
    	for(int i = 0; i < 5 ; ++i)
        	p[i] = i;
	do{
		temp = a[p[0]][p[1]] + a[p[1]][p[0]];
		temp+= a[p[2]][p[3]] + a[p[3]][p[2]];
		
		temp+= a[p[1]][p[2]] + a[p[2]][p[1]];
		temp+= a[p[3]][p[4]] + a[p[4]][p[3]];

		temp+= a[p[2]][p[3]] + a[p[3]][p[2]];
		temp+= a[p[3]][p[4]] + a[p[4]][p[3]];

		if(temp>ans)
			ans = temp;
	}while(next_permutation(p, p+5));
	printf("%lld\n", ans);
	return 0;
}

