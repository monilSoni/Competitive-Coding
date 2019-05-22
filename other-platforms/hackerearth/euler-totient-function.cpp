
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

LL phi(int n){
	LL result = n;
	vector<int> minprime(n+1, 0);
	for(int i=2; i*i<=n; i++){
		if(minprime[i]==0){
			for(int j=i*i; j<=n; j+=i){
				minprime[j] = i;
			}
		}
	}
	repp(i,2,n){
		if(minprime[i]==0) minprime[i]=i;
	}
	set<int> pfactor;
	while(n>1){
		pfactor.insert(minprime[n]);
		n/=minprime[n];
	}
	for(auto it:pfactor){
		result*= (1-1/(double)it);
	}
	return result;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%lld\n",phi(n));
	return 0;
}
