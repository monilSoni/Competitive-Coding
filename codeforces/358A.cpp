
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
    int n;
    scanf("%d", &n);
    vector<int> A(n);
    vector<pair<int, int>> pairs;
    for(int i=0; i<n; i++) cin >> A[i];

    for(int i=0; i<n-1; i++){
        if(A[i] > A[i+1])
            pairs.pb(mp(A[i+1], A[i]));
        else
            pairs.pb(mp(A[i], A[i+1]));
    }

    sort(all(pairs));

    for(int i=0; i<pairs.size(); i++) {
        for(int j=i+1; j<pairs.size(); j++){
            if(pairs[i].S <= pairs[j].F)
                break;
            if(pairs[i].F < pairs[j].F && pairs[j].F < pairs[i].S && pairs[i].S < pairs[j].S){
                printf("yes\n");
                return 0;
            }
        }
    }

    printf("no\n");
    return 0;
}
