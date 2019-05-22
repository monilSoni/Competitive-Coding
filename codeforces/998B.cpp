
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

int main(){
	int n, k, count=0;
	scanf("%d %d",&n,&k);
	int A[n], aux[n][2];
	rep(i,0,n){
		scanf("%d",&A[i]);
		if(A[i]&1){
			aux[i][1] = 1;
			aux[i][0] = 0;
		}else{
			aux[i][0] = 1;
			aux[i][1] = 0;
		}
	}

	vector<int> v;
	rep(i,1,n-1){
		aux[i][0] += aux[i-1][0];
		aux[i][1] += aux[i-1][1];
		if(aux[i][0] == aux[i][1] && abs(A[i]-A[i+1])<=k){
			v.pb(abs(A[i]-A[i+1]));
		}
	}
	
	sort(all(v));
	rep(i,0,v.size()){
		if(v[i]<=k){
			count++;
			k-=v[i];
		}
	}

	printf("%d\n",count);
	return 0;
}
