
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

int braces(string str) {
    stack<char> s;
    bool oper = false, operand = false;
    for(int i=0; i<str.length(); i++){
        if(str[i]!=')'){
            s.push(str[i]);
        }else{
            while(s.top()!='('){
                if(s.top()=='+' || s.top()=='-' || s.top()=='/' || s.top()=='*')
                    oper = true;
                else
                    operand = true;
                s.pop();
            }
            if(!oper || !operand)
                return 1;
            else{
                s.pop();
                oper = false;
                operand = false;
            }
        }
    }

    while(!s.empty()){
        char c = s.top();
        if(c == '(')
            return 1;
        s.pop();
    }

    return 0;
}

int main(){
	string s;
	cin >> s;
	printf("%d\n", braces(s));
	return 0;
}
