
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

bool ok(int n){
	while(n>0){
		int temp = n%10;
		if(temp>5 || temp ==0)
			return false;
		n/=10;
	}
	return true;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t-->0){
		int n, count = 0;
		scanf("%d",&n);
		for(int i=1; i<=n; i++){
			if(ok(i)) count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
