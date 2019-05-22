
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
	int count=0, index;
	cin >> str1 >> str2;
	if(str1.length()!=str2.length()){
		printf("NO\n");
	}else{
		for(int i=0; i<str1.length(); i++){
			if(str1[i]!=str2[i]){
				if(count==1){
					char c = str1[i];
					str1[i] = str1[index];
					str1[index] = c;
					if(str1!=str2){
						printf("NO\n");
					}else{
						printf("YES\n");
					}
					return 0;
				}else{
					count++;
					index = i;
				}
			}
		} printf("NO\n");
	}
	return 0;
}
