
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

int next(int n){
	int result = 1;
	for(int i=2; i*i<=n; i++){
		if(n%i == 0){
			result = n/i;
			break;
		}
	}
	return result;
}

int main(){
	int n;
	scanf("%d",&n);
	while(n!=1){
		printf("%d ", n);
		n = next(n);
	}
	printf("1\n");
	return 0;
}
