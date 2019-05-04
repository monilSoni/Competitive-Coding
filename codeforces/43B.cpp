
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
	string str1, str2;
	unordered_map<char, int> hash;
	getline(cin, str1);
	getline(cin, str2);
	for(int i=0; i<str1.length(); i++){
		if(str1[i] == ' ')
			continue;
		else{
			if(hash.find(str1[i]) == hash.end()){
				hash[str1[i]] = 1;
			}else{
				hash[str1[i]]++;
			}
		}
	}
	for(int i=0; i<str2.length(); i++){
		if(str2[i]==' ') continue;
		if(hash.find(str2[i]) == hash.end() || hash[str2[i]]==0){
			printf("NO\n");
			return 0;
		}else{
			hash[str2[i]]--;
		}
	}
	printf("YES\n");
	return 0;
}
