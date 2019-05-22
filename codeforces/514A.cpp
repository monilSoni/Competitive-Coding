/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define _for(i,n) for(int i=0; i<n; i++)
#define __for(i,n) for(int i=1; i<=n; i++)
#define REP(i,s,n)  for (int i=(s),_n=(n);i<=_n;i++)
#define FOR(i,n)  for (int i=0,_n=(n);i<_n;i++)
#define REPD(i,e,s)  for (int i=(e),_s=(s);i>=_s;i--)
#define tr(container, it) \
	for (typeof(container.begin()) it=container.begin(); it!=container.end();it++)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define ALL(x) x.begin(),x.end()

int atoi(char c){
	return c - '0';
}

int main(){
	long long int x;
	scanf("%lld", &x);
	string s = to_string(x);
	long long int n = s.length();
	if(atoi(s.at(0)) == 9 || atoi(s.at(0))<5)
		cout << (s.at(0));
	else 
		cout << to_string(9-atoi(s.at(0)));
	for(int i=1; i<n; i++){
		if(atoi(s.at(i)) < 5)
			cout << (s.at(i));
		else
			cout << to_string(9-atoi(s.at(i)));
	}
	printf("\n");
	return 0;
}
