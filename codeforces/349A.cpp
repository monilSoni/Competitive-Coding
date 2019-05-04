
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
	int n, a[3]={0}, x; // 25 50 100
	scanf("%d",&n);
	vector<int> v;
	rep(0,n){
		scanf("%d",&x);
		v.pb(x);
	}
	rep(0,n){
		if(v[i] == 25){ // If 25 rubles, I just add it as change
			a[0]++; 
		}else if(v[i] == 50){ // If 50 rubles, I check if I have a 25 ruble bill as change
			if(a[0] == 0){
				printf("NO\n");
				return 0;
			}
			a[0]--; // If I do, I deduct one 25 ruble bill
			a[1]++; // I add a 50 ruble bill
		}else{
			if(a[0]>=1 && a[1]>=1){ // I check for one 50 ruble bill and one 25 ruble bill first. Because I need to save 25 rubles for the next 50 ruble guy 
				a[0]-=1;
				a[1]-=1;
				a[2]++;
			}else if(a[0]>=3){ // If I don't then 3 25 rubles would cut it
				a[0]-=3;
				a[2]++;
			}else{
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	return 0;
}
				
