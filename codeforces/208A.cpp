
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
	string str;
	cin >> str;
	int n = str.length();
	for(int i=0; i<n;){
		if(i+2<n && str.substr(i, 3) == "WUB")
			i+=3;
		else{
			string result;
			while(i+2<n && str.substr(i, 3) != "WUB"){
				result.pb(str[i]);
				i++;
			}if(i>=n-2) {result+=str.substr(i, string::npos); i=n;}
			cout << result + " ";
		}
	}
	printf("\n");
	return 0;
}
