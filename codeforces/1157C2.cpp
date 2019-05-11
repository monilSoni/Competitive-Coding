
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
    scanf("%d", &n);
    vector<int> A(n);
    for(int i=0; i<n; i++) scanf("%d", &A[i]);

    string str = "";
    int l = 0, r = n-1, x = 0, length;
    while(l <= r){
        if(A[l] <= x && A[r] <= x)
            break;

        if((A[l] > x && A[r] <= x) || (A[l] > x && A[r] > x && A[l] < A[r])){
            str.pb('L');
            x = A[l++];
        }else if(A[l] <= x && A[r] > x || (A[l] > x && A[r] > x && A[l] > A[r])){
            str.pb('R');
            x = A[r--];
        }else{
            // both are greater and equal to each other
            int l_temp = l, r_temp = r, x_temp = x;
            string left = "", right = "";
            while(A[l_temp] > x_temp && A[r_temp] > x_temp && A[l_temp] == A[r_temp]){

                x_temp = A[l_temp];
                l_temp++, r_temp--;
                left.pb('L'), right.pb('R');
            } 

            if(A[l_temp] <= x_temp && A[r_temp] <= x_temp){
                l = l_temp;
                str = str + left;
                x = x_temp;
            }else if((A[l_temp] > x_temp && A[r_temp] <= x_temp) || (A[l_temp] > x_temp && A[r_temp] > x_temp && A[l_temp] < A[r_temp])){
                l = l_temp;
                str = str + left;
                x = x_temp;
            }else{
                r = r_temp;
                str = str + right;
                x = x_temp;
            }
        }
    }

    printf("%ld\n", str.length());
    cout << str << "\n";
    return 0;
}


