
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    bool result = false;
    cin >> m >> n;
    for(int i=0; i<m; i++)
        for(int j=0, x; j<n; j++){
            cin >> x;
            if(x == 1 && (i == 0 || j == 0 || i == m-1 || j==n-1))
                result = true;
        }

    if(result)
        cout << "2\n";
    else
        cout << "4\n";
    
        
    return 0;
}
