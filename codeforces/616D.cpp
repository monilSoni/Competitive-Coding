
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

const int Maxm = 1000005;
int m[Maxm];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> A(n);
    for(int i=0; i<n; i++) scanf("%d", &A[i]);

    int i = 0, j = 0;

    pi result = MP(0, 0);
    LL count = 0;
    while(i<n && j<n){
        if(m[A[j]] == 0)
            count ++;
        m[A[j ++]] ++;

        while(count > k && i<=j){
            m[A[i]] --;
            if(m[A[i]] == 0)
                count --;
            i++;
        }
        if(result.S - result.F < j-i)
            result = MP(i, j);
    }

    printf("%d %d\n", result.F+1, result.S);
    return 0;
}
