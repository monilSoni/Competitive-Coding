
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

string convert(string A, int B) {
    if(B == 1)
        return A;

    vector<vector<char>> matrix(B);
    matrix[0].push_back(A[0]);
    for(int i = 1, j = 1, dir = 1; i < A.length(); i++){

        matrix[j].push_back(A[i]);
        j += dir;
        if(j == B)
            j = B-2, dir = -1;
        else if(j == -1)
            j = 1, dir = +1;

    }

    string result = "";
    for(int i=0; i<B; i++)
        for(int j = 0; j<matrix[i].size(); j++)
            result.push_back(matrix[i][j]);

    return result;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    string A;
    int B;
    cin >> A >> B;
    cout << convert(A, B) << "\n";
    return 0;
}

