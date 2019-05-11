
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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    scanf("%d", &n);
    vector<int> A(n);
    for(int i=0; i<n; i++) scanf("%d", &A[i]);

    vector<int> result;
    string str = "";
    int l = 0, r = n-1, x = 0;
    while(l <= r){
        if(A[l] < x && A[r] < x)
            break;

        if((A[l] > x && A[r] > x && A[l] < A[r]) || (A[l] > x && A[r] < x)){
            str.pb('L');
            x = A[l++];
            result.pb(x);
        } else {
            str.pb('R');
            x = A[r--];
            result.pb(x);
        }
    }

    printf("%ld\n", result.size());
    cout << str << "\n";
    return 0;
}


