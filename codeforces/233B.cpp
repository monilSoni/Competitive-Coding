
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pii;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define CLOCK_INIT clock_t start, stop; double t = 0.0; assert((start = clock())!=-1);
#define CLOCK_END stop = clock(); t = (double) (stop-start)/CLOCKS_PER_SEC; printf("Run time: %f\n", t); 

int main(){
	long long n;
	cin >> n;
	repp(s,1,90){
		LL x = sqrt((s*s)/4 + n)-s/2;
		LL temp = x;
		int sum = 0;
		while(temp){
			sum+=temp%10;
			temp/=10;
		}
		if(x*x + sum*x - n == 0){
			cout << x << "\n";
			return 0;
		}
	}
	cout << "-1\n";
	return 0;
}

