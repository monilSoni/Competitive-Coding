
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(s,n) for(int i=s; i<n; i++)
#define repp(s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

int main(){
	bool flag = true;
	string str;
	cin >> str;
	if(str.find("0")!=string::npos) str.erase(str.begin()+str.find_first_of("0"));
	else str.erase(str.begin());
	cout << str << "\n";
	return 0;
}
