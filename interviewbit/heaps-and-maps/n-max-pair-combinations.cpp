
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

vector<int> solve(vector<int> &A, vector<int> &B) {
    priority_queue<pair<int, pair<int, int>>> q;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int n = A.size(), i = n-1, j = n-1;
    q.push(make_pair(A[n-1]+B[n-1], make_pair(n-1, n-1)));

    set<pair<int, int>> s;
    vector<int> v;
    while(v.size() < n){
        pair<int, pair<int, int>> p = q.top(); q.pop();
        if(!s.count(p.second)){
            v.push_back(p.first);
            s.insert(p.second);
            i = p.second.first, j = p.second.second;
            if(i > 0)   q.push(make_pair(A[i-1]+B[j], make_pair(i-1, j)));
            if(j > 0)   q.push(make_pair(A[i]+B[j-1], make_pair(i, j-1)));
        }
    }

    return v;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for(int i=0; i<n; i++) cin >> A[i];
    for(int i=0; i<n; i++) cin >> B[i];
    vector<int> result = solve(A, B);
    for(int i=0; i<n; i++)
        cout << result[i] << " ";
    cout << "\n";
    return 0;
}
