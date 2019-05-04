
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

int freq[1005]={0};

int main(){
	int n, max=INT_MIN, x;
	scanf("%d",&n);
	rep(0,n){
		scanf("%d",&x);
		freq[x]++;
		if(freq[x]>max){
			max = freq[x];
		}
	}
	if(n==1 || max<=(n+1)/2){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
