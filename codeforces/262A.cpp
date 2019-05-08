
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
    int n, k, result=0;
    scanf("%d %d", &n, &k);
    for(int i=0, x, count = 0; i<n; i++, count=0){
        scanf("%d", &x);
        while(x){
            if(x%10 == 4 || x%10 == 7) count++;
            x/=10;
        }
        if(count <= k)
            result++;
    }
    printf("%d\n", result);
    return 0;
}
