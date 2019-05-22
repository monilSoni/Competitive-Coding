
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000003
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

int main(){
	map<char, string> hash;
	hash['>'] = "1000";
	hash['<'] = "1001";
	hash['+'] = "1010";
	hash['-'] = "1011";
	hash['.'] = "1100";
	hash[','] = "1101";
	hash['['] = "1110";
	hash[']'] = "1111";
	string str, result="";
	cin >> str;
	for(int i=0; i<str.length(); i++){
		result += hash[str[i]];
	}
	int power = 1;
	long long ans = 0;
	for(int i=result.length()-1; i>=0; i--, power = ((power%MOD)*2)%MOD){
		if(result[i] == '1') ans = ((ans%MOD) + power)%MOD;
	}
	printf("%lld\n", ans);
	return 0;
}

