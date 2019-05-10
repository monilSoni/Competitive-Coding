
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
    string str;
    cin >> str;
    vector<int> freq(4, 0); // n, e, i, t
    for(int i=0; i<str.length(); i++){
        switch(str[i]){
            case 'n': freq[0]++;
                      break;
            case 'e': freq[1]++;
                      break;
            case 'i': freq[2]++;
                      break;
            case 't': freq[3]++;
                      break;
        }
    }

    int result = 0;
    freq[0]--;
    while(freq[0] >= 2 && freq[1] >= 3 && freq[2] >= 1 && freq[3] >= 1){
        result++;
        freq[0] -= 2;
        freq[1] -= 3;
        freq[2]--;
        freq[3]--;
    }
    cout << result << "\n";
    return 0;
}
