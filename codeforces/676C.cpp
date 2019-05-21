
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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    int i = 0, j = 0, result = 0;
    int m[2] = {0, 0};
    while(i<n && j<n){
        m[str[j ++]-'a'] ++;
        while(min(m[0], m[1]) > k){
            m[str[i ++]-'a'] --;
        }
        // at this stage after the loop it is guaranteed that the substring under consideration will be valid
        result = max(result, j-i); 
    }
    cout << result << "\n";
    return 0;
}

