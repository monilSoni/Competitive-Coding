
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
	string A, B;
	cin >> A >> B;
	vector<int> afreq(26, 0), bfreq(26, 0);
	rep(i,0,A.size()){
		afreq[A[i]-97]++;
	}
	rep(i,0,B.size()){
		bfreq[B[i]-97]++;
	}
	int result = 0;
	rep(i,0,26){
		if(afreq[i] == 0 && bfreq[i]>0){
			result = -1;
			break;
		}
		result += min(afreq[i], bfreq[i]);
	}
	printf("%d\n",result);
	return 0;
}
