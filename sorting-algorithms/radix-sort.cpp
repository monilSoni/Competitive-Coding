
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

void countsort(vl &A, int place){
	int i, freq[10];
	memset(freq, 0, sizeof(freq));
	int output[A.size()];
	rep(i,0,A.size()){
		freq[(A[i]/place)%10]++;
	}
	rep(i,1,10){
		freq[i]+=freq[i-1];
	}
	for(int i=A.size()-1; i>=0; i--){
		output[freq[(A[i]/place)%10]-1] = A[i];
		freq[(A[i]/place)%10]--;
	}
	rep(i,0,A.size()){
		A[i]=output[i];
	}
}

int main(){
	int n, max =INT_MIN;
	scanf("%d",&n);
	vector<LL> A(n);
	rep(i,0,n){
		scanf("%lld",&A[i]);
		if(A[i]>max) max=A[i];
	}
	//Radix Sort
	int m=1;
	while(max){
		countsort(A, m);
		m*=10;
		max/=10;
	}
	
	rep(i,0,n) printf("%lld ",A[i]);
	puts("");
	return 0;
}
