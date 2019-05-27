
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

int nchoc(int k, vector<int> &A) {
    priority_queue<int> q;
    for(int i=0; i<A.size(); i++)
        q.push(A[i]);
    long long result = 0;
    for(int i=0, x; i<k; i++){
        x = q.top(); q.pop();
        result = (result+x)%1000000007;
        q.push(x/2);
    }
    
    return result;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i=0; i<n; i++) cin >> A[i];
    cout << nchoc(k, A) << "\n";
    return 0;
}
