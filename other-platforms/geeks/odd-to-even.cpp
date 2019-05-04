
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
	int t;
	scanf("%d",&t);
	while(t-->0){
		string str;
		cin >> str;
		int result = -1, n = str.size();
		int index = -1;
		for(int i=n-1; i>=0; i--){
			if((str[i]-'0')%2==0){
				if(index == -1) index = i;
				if(str[i] < str[n-1]){
					index = i;
				}
			}
		}
		if(index==-1){
			cout << str << "\n";
		}else{
			char temp = str[index];
			str[index] = str[n-1];
			str[n-1] = temp;
			cout << str << "\n";
		}
	}
	return 0;
}

