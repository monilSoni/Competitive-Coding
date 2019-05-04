
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
	int n, temp;
	vector<int> v = {1, 1, 3};
	scanf("%d",&n);
	if(n == 0) printf("0 0 0\n");
	else if(n==1) printf("0 0 1\n");
	else if(n==2) printf("0 1 1\n");
	else if(n==3) printf("1 1 1\n");
	else{
		while(v[0]+v[1]+v[2]<n){
			v[2] = v[2]+v[1]+v[0];
			temp = v[1];
			v[1] += v[0];
			v[0] = temp;	
		}
		printf("%d %d %d\n", v[0], v[1], v[2]);
	}
	return 0;
}
