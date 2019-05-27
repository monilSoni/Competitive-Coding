
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

vector<int> Solution::dNums(vector<int> &A, int k) {
    vector<int> v;
    if(A.size() < k)
        return v;

    map<int, int> m;
    for(int i=0; i<k; i++)
        m[A[i]] = m[A[i]] + 1;

    v.push_back(m.size());

    for(int i=k; i<A.size(); i++){
        m[A[i]]++;

        if(!(--m[A[i-k]]))
            m.erase(A[i-k]);

        v.push_back(m.size());
    }
    return v;
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
    vector<int> result = dNums(A, k);
    for(int i=0; i<result.size(); i++)
        cout << result[i] << " ";
    cout << "\n";
    return 0;
}
