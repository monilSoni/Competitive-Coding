
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

vector<int> slidingMaximum(const vector<int> &A, int w) {
    int n = A.size();
    w = min(w, n);
    vector<int> v;
    deque<int> d;
    for(int i=0; i<w; i++){
        while(!d.empty() && A[d.back()] < A[i])
            d.pop_back();
        d.push_back(i);
    }
    v.push_back(A[d.front()]);
    
    for(int i=w; i<A.size(); i++){
        while(!d.empty() && d.front() < i-w+1)
            d.pop_front();
        while(!d.empty() && A[d.back()] < A[i])
            d.pop_back();
        d.push_back(i);
        v.push_back(A[d.front()]);
    }
    return v;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, w;
    cin >> n >> w;
    vector<int> A(n);
    for(int i=0; i<n; i++) cin >> A[i];
    vector<int> result = slidingMaximum(A, w);
    for(int i=0; i<result.size(); i++)
        cout << result[i] << "\n";
    cout << "\n";
    return 0;
}

