
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
    string A, B;
    cin >> A >> B;

    int a = A.length(), b = B.length();
    if(a < b)
        A = string(b-a, '0') + A;
    else if(b < a)
        B = string(a-b, '0') + B;
    
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    string result = "";
    int c = 0;
    for(int i = 0, j = 0, x, y, sum; i < A.length() && j < B.length(); i++, j++){ 
        x = A[i]-'0';
        y = B[i]-'0';
        sum = x^y^c;
        c = x&y | (c&(x^y));
        result.push_back(sum + '0');
    }

    if(c)
        result.push_back('1');
    reverse(result.begin(), result.end());
    cout << result << "\n";
    return 0;
}
