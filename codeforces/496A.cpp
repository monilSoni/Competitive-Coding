
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
    vector<int> A(n), copy;
    for(int i=0; i<n; i++) scanf("%d", &A[i]);

    int diff = INT_MAX, temp_diff = -1;
    for(int i=1; i<n-1; i++){
        copy = A;
        copy.erase(copy.begin()+i);
        temp_diff = -1;
        for(int j=0; j<copy.size()-1; j++){
            temp_diff = max(temp_diff, copy[j+1]-copy[j]);
        }
        diff = min(diff, temp_diff);
    }

    printf("%d\n", diff);
    return 0;
}

