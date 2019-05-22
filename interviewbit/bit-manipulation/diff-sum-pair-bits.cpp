
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

int cntBits(vector<int> &A) {
    long long int result = 0;
    for(int i=0, count=0; i<32; i++){
        count = 0;
        for(int j=0; j<A.size(); j++){
            if(A[j] & (1 << i))
                count ++;
        }
        result += count*(A.size()-count);
        result = result % 1000000007;
    }

    result = 2*result;
    result = result % 1000000007;
    return (int)result;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++) cin >> A[i];
    cout << cntBits(A) << "\n";
    return 0;
} 
