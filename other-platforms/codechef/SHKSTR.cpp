
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

int main(){
	int n;
	int q;
	vector<string> strings;
	int x;
	int r;
	string s;
	scanf("%d", &n);
	_for(i, n){
		cin >> s;
		strings.pb(s);
	}
	scanf("%d",&q);
	_for(i,q){
		cin >> r >> s;
		vector<string> v(strings.begin(), strings.begin()+r);
		sort(v.begin(), v.end());
		int iterator = 0;
		int j = 0;
		int maxj = INT_MIN;
		int result;
		while(iterator < r){
			if(j<v[iterator].length() && j<s.length() && v[iterator].at(j) == s.at(j))
				j++;
			else{
				if(j > maxj){
					maxj = j;
					result = iterator;
				}
				j = 0;
				iterator++;
			}
		}
		cout << v[result] << "\n";
	}
	return 0;
}
