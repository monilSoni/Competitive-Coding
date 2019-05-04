
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
	int n, x;
	string str;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		str.pb(x+'0');
	}
	sort(str.begin(), str.end());
	int zero = str.find_first_of("5");
	if(zero == string::npos) printf("0\n");
	else{ 
		int five = n-zero; 
		if(zero == 0) printf("-1\n");
		else {
			x = five%9;
			five-=x;
			if(five == 0) printf("0\n");
			else{
				string result = str.substr(zero, five) + str.substr(0, zero);
				cout << result << "\n";
			}
		}
	}
	return 0;
}
