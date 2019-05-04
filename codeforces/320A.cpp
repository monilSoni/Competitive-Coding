
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
	for(int i=0; i<n; i++){
		if(i+2<n && str.substr(i,3) == "144"){
			i+=2;
		}else if(i+1<n && str.substr(i,2) == "14"){
			i+=1;
		}else if(str[i] == '1'){
			continue;
		}else{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}

