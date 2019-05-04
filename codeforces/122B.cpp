
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

int main(){
	string str;
	cin >> str;
	int four = 0, seven = 0;
	for(int i=0; i<str.length(); i++){
		if(str[i] == '4') four++;
		else if(str[i] == '7') seven++;
	}
	if(four == 0 && seven == 0) printf("-1\n");
	else (four >= seven) ? printf("4\n") : printf("7\n");
	return 0;
}
