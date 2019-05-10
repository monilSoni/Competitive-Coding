
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

int snap(vector<int> A){
    if(A.size() == 1)
        return 1;

    bool sorted = true;
    for(int i=1; i<A.size(); i++)
        if(A[i-1] > A[i]){
            sorted = false;
            break;
        }

    if(sorted)
        return A.size();

    vector<int> child1 = vector<int>(A.begin(), A.begin()+ A.size()/2);
    vector<int> child2 = vector<int>(A.begin()+A.size()/2, A.end());
    return max(snap(child1), snap(child2));
}


int main(){
    int n;
    scanf("%d", &n);
    vector<int> A(n);
    for(int i=0; i<n; i++) scanf("%d", &A[i]);

    cout << snap(A) << "\n";
    return 0;
}

