
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

int sigdiff(int x, int y){
	x-=y;
	return (x > 0) - (x < 0);
}

int main(){
	int n;
	string s;
	scanf("%d",&n);
	cin >> s;
	string num1 = s.substr(0, n);
	string num2 = s.substr(n, n);
	sort(num1.begin(), num1.end()); sort(num2.begin(), num2.end());
	if(sigdiff(num1[0]-'0', num2[0]-'0') == 0){
		printf("NO\n");
		return 0;
	}
	for(int i=0; i<n; i++){
		if(sigdiff(num1[i]-'0', num2[i]-'0') != sigdiff(num1[0]-'0', num2[0]-'0')){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
