
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

vector<int> zero(100005);
vector<int> one(100005);
int result[100005]; 


int main(){
	string str;
	int t, k, q, l, r, n;
	scanf("%d\n", &t);
	while(t--){
		scanf("%d %d %d",&n,&k,&q);
		cin >> str;
		zero[0] = 0; one[0] = 0;
		for(int i=1; i<=str.size(); i++){
			if(str[i-1] == '1'){
				one[i] = one[i-1]+1;
				zero[i] = zero[i-1];
			}else{
				one[i] = one[i-1];
				zero[i] = zero[i-1]+1;
			}
		}
		for(int i=1; i<=n; i++){
			int index = upper_bound(zero.begin()+i, zero.begin()+n+1, zero[i-1]+k) - zero.begin() -1;
			int index2 = upper_bound(one.begin()+i, one.begin()+n+1, one[i-1]+k) - one.begin() -1;
			result[i] = min(index, index2);
		}

		
		for(int i=0; i<q; i++){
			scanf("%d %d",&l,&r);
			long long ans = 0;
			for(int i=l; i<=r; i++){
				ans+=(min(r, result[i])-i+1);
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
}


		

