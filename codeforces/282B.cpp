
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
	int n;
	scanf("%d",&n);
	string result = "";
	int A=0, G=0, x, y;
	for(int i=0; i<n; i++){
		scanf("%d %d",&x,&y);
		if(A+x-G>500){
			G+=y;
			result.pb('G');
		}else{
			A+=x;
			result.pb('A');
		}
	}
	cout << result << "\n";
	return 0;
}
