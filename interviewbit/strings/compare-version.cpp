
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
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

int solve(string A, string B){
	int j = 0;
	int asize = A.size();
	int bsize = B.size();
	int length = max(A.size(), B.size());
	int a, b;
	while(j < length){
		a = A.substr(j, asize).find('.');
		b = B.substr(j, bsize).find('.');
		if(a==string::npos && b!=string::npos)
			return -1;
		if(a!=string::npos && b==string::npos)
			return 1;
		/*if(a == string::npos)
			a = asize;
		if(b == string::npos)
			b = bsize;
		*/printf("%d %d & %d\n",j, j+a, j+b);
		unsigned long long int va = stoi(A.substr(j, j+a));
		unsigned long int vb = stoi(B.substr(j, j+b)); 
		if(va == vb)
			j = a+1;
		else if(va < vb)
			return -1;
		else 
			return 1;
	}
	return 0;
}

int main(){
	string A, B;
	cin >> A >> B;
	//cout << A.substr(0, -1);
	printf("%d\n", solve(A, B));
	return 0;
}
