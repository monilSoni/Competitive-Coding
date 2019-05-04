
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define PI 3.14159265358979323846264338327950288419716939937510
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

int main(){
	int n;
	scanf("%d",&n);
	vector<int> A(n+1, 0);
	repp(i,1,n) scanf("%d",&A[i]);
	double sum = 0;
	sort(all(A));
	for(int i=n; i>=1; i-=2){
		sum = sum + (A[i]*A[i]) - (A[i-1]*A[i-1]);
	}
	printf("%.10lf\n",PI*sum);
	return 0;
}
