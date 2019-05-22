
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
	string s, t;
	cin >> s >> t;
	int tp=0, sp=0;
	int S[26], T[26]; memset(S, 0, sizeof(S)); memset(T, 0, sizeof(T));
	rep(i,0,s.length()) S[s[i]-97]++;
	rep(i,0,t.length()) T[t[i]-97]++;

	bool automa = false;
	rep(i,0,26){
		if(S[i]<T[i]){
			printf("need tree\n");
			return 0;
		}else if(S[i]>T[i]){
			automa = true;
		}
	}

	if(automa){
		//check order
		while(sp<s.length() && tp<t.length()){
			if(s[sp] == t[tp]){
				sp++;
				tp++;
			}else{
				sp++;
			}
		}
		if(tp<t.length()){
			printf("both\n");
		}else{
			printf("automaton\n");
		}
	}else{
		printf("array\n");
	}
	
	return 0;
}
