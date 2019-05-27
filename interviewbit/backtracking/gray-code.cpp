
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

void solve(long long n, vector<int> &result){
    if(n == 1){
        result.push_back(0);
        result.push_back(1);
        return;
    }
    solve(n/2, result);
    for(int i = result.size()-1; i>=0; i--)
        result.push_back(n + result[i]);
    return;
}

vector<int> grayCode(int A) {
    vector<int> result;
    long long n = 1;
    while(A > 1)
        n*=2, A--;
    solve(n, result);
    return result;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    vector<int> result = grayCode(n);
    for(int i=0; i<result.size(); i++)
        cout << result[i] << " ";
    cout << "\n";
    return 0;
}
