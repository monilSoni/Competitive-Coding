
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
	int t, n;
	stack<int> input, aux;
	int output;
	scanf("%d",&n);
	while(n!=0){
		clear(input); clear(aux); output = 0;
		vector<int> v(n);
		bool ok = true;
		rep(i,0,n) scanf("%d",&v[i]);
		repp(i,1,n) input.push(v[n-i]);
		while(output<n){
			if(!input.empty() && output+1 == input.top()){
				output++;
				input.pop();
			}else if(!aux.empty() && output+1 == aux.top()){
				output++;
				aux.pop();
			}else{
				if(input.empty()){
					ok = false;
					break;
				}
				aux.push(input.top());
				input.pop();
			}
		}
		(ok)?printf("yes\n"):printf("no\n");
		scanf("%d",&n);
	}
	return 0;
}
