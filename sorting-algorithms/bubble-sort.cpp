
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

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n;
	scanf("%d",&n);
	vector<int> v(n);
	rep(i,0,n) scanf("%d",&v[i]);

	//Bubble Sort
	rep(k,1,n){
		rep(i,0,n-k){
			if(v[i]>v[i+1])
				swap(&v[i], &v[i+1]);
		}
	}

	rep(i,0,n) printf("%d ",v[i]);
	puts("");
	return 0;
}
