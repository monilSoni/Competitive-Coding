
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
	int n,x;
	scanf("%d",&n);
	vector<int> first, second;
	long long int fsum = 0, ssum=0;
	bool last;
	rep(i,0,n){
		scanf("%d",&x);
		if(x>0){
			first.push_back(x);
			fsum+=x;
			last = false;
		}
		if(x<0){
			second.pb(abs(x));
			ssum+=abs(x);
			last = true;
		}
	}
	if(fsum!=ssum){
		(fsum>ssum)?printf("first\n"):printf("second\n");
	}else{
		int i=0, j=0;
		while(i<first.size() && j<second.size()){
			if(first[i]>second[i]){
				printf("first\n");
				return 0;
			}
			if(second[i]>first[i]){
				printf("second\n");
				return 0;
			}
			i++; j++;
		}
		(!last)?printf("first\n"):printf("second\n");
	}

	
	return 0;
}

