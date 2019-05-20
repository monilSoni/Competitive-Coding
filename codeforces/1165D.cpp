
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

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> list(n);
        for(int i=0; i<n; i++) cin >> list[i];
        sort(list.begin(), list.end());

        int result = list[0]*list[n-1];
        int factors = 0;
        for(int i = 2; i*i <= result; i++)
            if(result % i == 0){
                factors++;
                if(result/i != i)
                    factors++;
            }

        if(factors != n){
            result = -1;
        }else{
            for(int i=0; i<(n+1)/2; i++)
                if(result != list[i]*list[n-1-i]){
                    result = -1;
                    break;
                }
        }
        cout << result << "\n";
    }
    return 0;
}


