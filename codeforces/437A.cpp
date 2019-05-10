
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
    vector<int> options(4);
    for(int i=0; i<4; i++) {
        string str;
        cin >> str;
        options[i] = str.size()-2;
    }

    vector<int> result;
    bool check = true;
    for(int i=0; i<4; i++, check = true){

        for(int j=0; j<4; j++)
            if(i!=j && !(2*options[i] <= options[j]) )
                    check = false;

        if(check)   result.pb(i);
    } 

//    if(result.size() == 1) {
//        printf("%c\n", 'A'+result[0]);
//       return 0;
//    }

    check = true;
//    result.clear();
    for(int i=0; i<4; i++, check = true){

        for(int j=0; j<4; j++)
            if(i!=j && !(options[i] >= 2*options[j]) )
                    check = false;

        if(check)   result.pb(i);
    }

    if(result.size() == 1)
        printf("%c\n", 'A'+result[0]);
    else
        printf("C\n");

    return 0;
}
