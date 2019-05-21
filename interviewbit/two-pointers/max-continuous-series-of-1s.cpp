
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

vector<int> maxone(vector<int> &A, int B) {
    int i = 0, j = 0, count = 0;
    pair<int, int> result;
    while(i < A.size() && j < A.size()){
        if(A[j++] == 0)
            count ++;
        while(i <= j && count > B)
            count -= (1 - A[i++]);
        if(result.second - result.first > j-i)
            result = make_pair(i, j);
    }
    
    vector<int> v;
    for(int i=result.first; i<=result.second; i++) v.push_back(i);
    
    return v;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, k;
    cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++) cin >> A[i];
    cin >> k;

    vector<int> result = maxone(A, k);
    for(int i=0; i<result.size(); i++) cout << result[i] << " ";
    cout << "\n";
    return 0;
}
