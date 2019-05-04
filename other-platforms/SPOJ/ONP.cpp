
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

void clear(stack<int> &s){
	while(!s.empty()) s.pop();
}

int main(){
	int t;
	scanf("%d",&t);
	unordered_map<char, int> priority;
	priority['('] = 0;
	priority['+'] = 1;
	priority['-'] = 2;
	priority['*'] = 3;
	priority['/'] = 4;
	priority['^'] = 5;
	while(t--){
		string str;
		cin >> str;
		stack<int> s; clear(s);
		vector<char> v; v.clear();
		rep(i,0,str.length()){
			if(str[i] == '('){ // Open bracket
				s.push(str[i]);
			}
			else if(str[i] == ')'){ // Close bracket
				while(s.top()!='('){
					v.pb(s.top());
					s.pop();
				} s.pop();
			}
			else if(str[i] == '*' || str[i] == '/' || str[i] == '-' || str[i] == '+' || str[i] == '^' ){ //Operator
				while(!s.empty() && priority[str[i]] < priority[s.top()]){
					v.pb(s.top()); s.pop();
				}
				s.push(str[i]);
			}else{
				v.pb(str[i]);
			}
		}
		while(!s.empty()) v.pb(s.top()),s.pop();
		rep(i,0,v.size()) printf("%c",v[i]);
		puts("");
	}
	return 0;
}
