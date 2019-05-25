
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

string simplifyPath(string A) {
    int i = 0, n = A.length();
    string filename = "";
    stack<string> s;
    while(i < n){
        filename.clear();
        do{
            filename.push_back(A[i++]);
        }while(i < n && A[i]!='/');
        
        if(filename == "/." || filename == "/" || (s.empty() && filename == "/.."))
            continue;
        else if(filename == "/..")
            s.pop();
        else
            s.push(filename);
    }
    
    string result = "";
    while(!s.empty()){
        result = s.top() + result;
        s.pop();
    }
    
    if(result.empty())
        result.push_back('/');
        
    return result;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string path;
    cin >> path;
    cout << simplifyPath(path) << "\n";
    return 0;
}
