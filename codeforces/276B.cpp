
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
    	double beg=clock();
	int n=0;
	int arr[26]; memset(arr, 0, sizeof(arr));
	string str;
	cin >> str;
	rep(i,0,str.length()) arr[str[i]-97]++;
	rep(i,0,26) if(arr[i]&1) n++;
	
	(n&1 || n==0)?printf("First\n"):printf("Second\n");
	double end=clock();
	fprintf(stderr,"*** Total time = %.3lf ***\n",(end-beg)/CLOCKS_PER_SEC);
	return 0;
}
