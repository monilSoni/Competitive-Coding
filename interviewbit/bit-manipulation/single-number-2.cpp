
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

int singleNumber(const vector<int> &A) {
    int n = A.size();
    int ones = 0, twos = 0, threes = 0;
    for (int i = 0; i < n; i++) {
        twos |= ones & A[i]; // twos contains bits which are occuring twice. We get that information by doing an and operation betweens ones and A[i] which says that the bits that are already one and there is one in the corresponding bit of A[i]
        ones ^= A[i]; // again, when we xor it, we just update the ones if A[i] bit is one. 
        threes = ones & twos; // the bits that are both in ones and two are occuring for the third time we ensure this by the next two lines
        ones &= ~threes; // we reset the bits that have occured thrice 
        twos &= ~threes; // we reset the bits that have occures thrice
    }
    return ones;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++) cin >> A[i];
    cout << singleNumber(A) << "\n";
    return 0;
}
