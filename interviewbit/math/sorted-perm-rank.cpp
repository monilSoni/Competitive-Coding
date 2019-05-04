
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

//#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

#define MOD 1000003
vector<int> fact(100005);

int findRank(string A) {
    fact[0] = 1;
    for(int i=1; i<A.size()+1; i++){
        fact[i] = ((i%MOD)*(fact[i-1]%MOD))%MOD;
    }
    int n = A.length();
    multiset<char> s;
    for(int i=0; i<n; i++){
        s.insert(A[i]);
    }
    cout << "HELLo\n";
    long long int result = 0;
    for(int i=0; i<n; i++){
        auto index = s.find(A[i]);
        s.erase(index);
        cout << i << "\n";
        result = (result%MOD + ((distance(s.begin(), index)%MOD)*fact[n-i-1]%MOD)%MOD)%MOD;
    }

    return result;
}

int main(){
	string str;
	cin >> str;
	cout << findRank(str) << "\n";
	return 0;
}
