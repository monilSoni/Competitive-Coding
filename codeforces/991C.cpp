
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
    // CLOCK_INIT
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    LL n;
    cin >> n;

    LL lo = 1, hi = n, k, mid;
    while(lo <= hi){
        mid = lo + (hi-lo)/2;
        LL temp = n, v = 0, p = 0;
        while(temp){
            v += min(mid, temp);
            temp -= min(mid, temp);
            p += temp/10;
            temp -= temp/10;
        }
        
        cout << lo << " " << mid << " " << hi << " " << v << " " << p << "\n";
        if(v < (n+1)/2){
            lo = mid+1;
        }else{
            k = mid;
            hi = mid-1;
        }
    }

    cout << k << "\n";
    // CLOCK_END
    return 0;
}

