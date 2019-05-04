
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
	pair<int, int> s, t;
	cin >> str;
	s.first = str[0]-97+1;
	s.second = str[1]-'0';
	cin >> str;
	t.first = str[0]-97+1;
	t.second = str[1]-'0';
	printf("%d\n", max(abs(s.first-t.first), abs(s.second-t.second)));
	while(s!=t){
		str = "";
		if(s.first < t.first){
			s.first++;
			str.pb('R');
		}else if(s.first > t.first){
			s.first--;
			str.pb('L');
		}
		if(s.second < t.second){
			s.second++;
			str.pb('U');
		}else if(s.second > t.second){
			s.second--;
			str.pb('D');
		}
		cout << str << "\n";
	}
	return 0;
}
	
