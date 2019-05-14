
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

bool checkPalindrome(int hour, int minute){
    string H = to_string(hour), M = to_string(minute);
    if(hour < 10)
        H = "0" + H;
    if(minute < 10)
        M = "0" + M;
    reverse(M.begin(), M.end());
    if(H == M){
        reverse(M.begin(), M.end());
        cout << H << ":" << M << "\n";
        return true;
    }
    return false;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string str;
    cin >> str;
    int hour = stoi(str.substr(0, 2)), minute = stoi(str.substr(3, 2));
    while(true){
        minute ++;
        if(minute == 60)
            minute = 0, hour++;
        if(hour == 24)
            hour = 0;
        if(checkPalindrome(hour, minute))
            break;
    }
    return 0;
}

