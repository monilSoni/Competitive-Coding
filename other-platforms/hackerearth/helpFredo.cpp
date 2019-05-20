
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pi;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define CLOCK_INIT clock_t start, stop; double t = 0.0; assert((start = clock())!=-1);
#define CLOCK_END stop = clock(); t = (double) (stop-start)/CLOCKS_PER_SEC; printf("Run time: %f\n", t); 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin >> n;

    long double prod = 0;
    vector<long long> A(n);
    for(int i=0; i<n; i++)
        cin >> A[i];

    sort(A.begin(), A.end());
    for(int i=0; i<n; i++)
        prod += (long double)log((long double) A[i]);

    long long ans, lo = A[0], hi = A[n-1]+1;
    while(lo <= hi){
        long long x = lo + (hi-lo)/2;
        long double temp = (long double)n*(long double)log((long double) x);
        if(prod < temp){
			ans = x;
			hi = x-1;
		}else
			lo = x+1;
    }

    cout << ans << "\n";
    return 0;
}
