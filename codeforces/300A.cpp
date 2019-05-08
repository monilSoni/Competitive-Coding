
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
    int n;
    bool check = false;

    scanf("%d", &n);
    vector<int> A(n);
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
        if(A[i] > 0) check = true;
    }

    vector<int> zero, negative, positive;
    for(int i=0; i<n; i++){
        if(check && A[i]>0){
            positive.pb(A[i]);
            A[i] = 10001;
            break;
        }else if(!check && A[i]<0){
            positive.pb(A[i]);
            A[i] = 10001;
            if(positive.size() == 2)
                break;
        }

    }

    for(int i=0; i<n; i++){
       if(A[i]<0){
          negative.pb(A[i]);
          A[i] = 10001;
          break;
       }
    }

    for(int i=0; i<n; i++)
        if(A[i]!=10001) zero.pb(A[i]);

    printf("%d ", negative.size()); 
    for(int i=0; i<negative.size(); i++) printf("%d ", negative[i]);

    printf("\n%d ", positive.size());
    for(int i=0; i<positive.size(); i++) printf("%d ", positive[i]);

    printf("\n%d ", zero.size());
    for(int i=0; i<zero.size(); i++) printf("%d ", zero[i]);

    printf("\n");
    return 0;
}
