
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

    int n, m, one=0, minus_one=0;
    cin >> n >> m;
    vector<int> A(n+1);
    for(int i=1; i<=n; i++){
        cin >> A[i];
        if(A[i] > 0)
            one++;
        else
            minus_one++;
    }

    for(int i=0, l, r; i<m; i++){
        cin >> l >> r;
        if(((r-l+1) % 2 == 0) && one >= (r-l+1)/2 && minus_one >= (r-l+1)/2)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }


    return 0;
}
