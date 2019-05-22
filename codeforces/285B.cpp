
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
	int n, s, t;
	scanf("%d %d %d",&n,&s,&t);
	vector<int> p(n+1);
	rep(i,1,n+1){
		scanf("%d",&p[i]);
	}
	int temp = s, count=0;
	while(temp!=t){
		temp = p[temp];
		if(temp == s){
			count = -1;
			break;
		}
		count++;
	}
	printf("%d\n",count);
	return 0;
}

