
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
	int n, k;
	string str; 
	int arr[26] = {0};
	scanf("%d",&k);
	cin >> str;
	n = str.length();
	for(int i=0; i<n; i++){
		arr[str[i]-97]++; // record the frequency of each characters
	}
	str = "";
	for(int i=0; i<26; i++){
		if(arr[i]%k!=0){
			printf("-1\n");
			return 0;
		}else{
			for(int j=0; j<arr[i]/k; j++){
				str.push_back(i+'a');
			}
		}
	}
	for(int i=0; i<k; i++) cout << str;
	printf("\n");
	return 0;
}
