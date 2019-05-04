
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
	int n, k;
	scanf("%d %d",&n,&k);
	string str, result;
	cin >> str;
	sort(str.begin(), str.end());
	result.pb(str[0]); k--;
	int i=0, j=0; 
	while(i<n && k>0){
		if(str[i]-result[j]>=2){
			result.pb(str[i]);
			j++; k--;
		}
		i++;
	}
	if(k!=0) printf("-1\n");
	else{
		int sum = 0;
		for(int i=0; i<result.length(); i++){
			sum+=(result[i]-97+1);
		}
		printf("%d\n", sum);
	}
	return 0;
}
		
