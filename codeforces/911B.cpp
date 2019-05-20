
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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, a, b;
    cin >> n >> a >> b;
    
    int lo = 1, hi = min(a, b), x, serves;
    while(lo < hi){
        x = lo + (hi-lo+1)/2;
        serves = 0;
        int temp = a;
        while(temp){
            temp = (temp - x < x) ? 0 : temp-x;
            serves++;
        }
        temp = b;
        while(temp){
            temp = (temp - x < x) ? 0 : temp-x;
            serves++;
        }
        if(serves < n)
            hi = x-1;
        else
            lo = x;
    }
    
    cout << lo << "\n";
    return 0;
}
