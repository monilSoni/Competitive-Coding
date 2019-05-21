
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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> A(n, vector<int> (m));
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> A[i][j];

    int l = 0, r = 0;
    bool move_right;
    deque<int> q[m];
    while(l < n && r < n){
    cout << "------------------\n"; 
        move_right = true;
        for(int j=0; j<m; j++)
            if(!q[j].empty() && A[q[j].front()][j] < A[r][j])
                move_right = false;

        if(move_right){
            for(int j=0; j<m; j++){
                while(!q[j].empty() && A[r] > A[q[j].back()])
                    q[j].pop_back();
                q[j].push_back(r);
            }
            r ++;
        }else{
            for(int j=0; j<m; j++){
                while(!q[j].empty() && q[j].front() <= l)
                    q[j].pop_front();
            }
            l ++;
        }

        cout << l << " " << r << "\n";
        for(int j=0; j<m; j++)
            cout << A[q[j].front()][j] << " " ;
        cout << "\n";
    }
    return 0;
}
