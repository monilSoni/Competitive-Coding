
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

int rmzero(int n){
    int ce = 1, x = 0;
    while(n){
        if(n%10 != 0){
            x+= (n%10)*ce;
            ce *= 10;
        }
        n/=10;
    }
    return x;
}

int main(){
    int a, b, c;
    cin >> a >> b;
    c = a+b;
    if(rmzero(a) + rmzero(b) == rmzero(c))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
