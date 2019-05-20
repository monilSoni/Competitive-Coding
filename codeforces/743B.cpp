
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

    long long n, k, N;
    cin >> n >> k;
    if(k&1){
        cout << "1\n";
        return 0;
    }

    N = 1;
    for(int i=0; i<n; i++) N*=2;

    for( ; n>0; n--){
        if(k == (N+1)/2){
            cout << n << "\n";
            return 0;
        }else if(k&1){
            cout << "1\n";
            return 0;
        }
        N = ((N+1)/2)-1;
        if(k > N) k-=N+1;
    }

    return 0;
}
