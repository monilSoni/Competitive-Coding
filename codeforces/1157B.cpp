
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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<char> map(10);
    for(int i=1; i<10; i++)
        cin >> map[i];

    for(int i=0; i<str.length(); i++){
        if(map[str[i]-'0'] <= str[i])
            continue;

        while(map[str[i]-'0'] >= str[i]){
            str[i] = map[str[i] - '0'];
            i++;
        }
        break;
    }

    cout << str << "\n";

    return 0;
}
