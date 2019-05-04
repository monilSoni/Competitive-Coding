
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

int func(string str, int p, int n){
    cout << p << "\n";
    if(p == n-1){
        return 1;
    }else if(p == n){
	return 0;
    }
    int result = func(str, p+1, n);
    if(str[p] == '1' || (str[p]=='2' && str[p+1]-'0'<=6)){
        result+= func(str, p+2, n);
    }
    return result;
}

int solve(string str, int n){
    for(int i=0; i<n; i++){
        if(str[i]=='0'){
            if(i==0 || (i>0 && (str[i-1]-'0'<1 || str[i-1]-'0'>2))){
                return 0;
            }
        }
    }
    return func(str, 0, n);
}


int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    string str;
	    cin >> str;
	    printf("\n%d\n", solve(str, n));
	}
	return 0;
}
