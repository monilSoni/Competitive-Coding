
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
	int d, sumtime;
	scanf("%d %d",&d,&sumtime);
	vector<pair<int, int>> limits(d);
	vector<int> allot(d, 0);
	for(int i=0; i<d; i++){
		scanf("%d %d",&limits[i].first, &limits[i].second);
		allot[i] = limits[i].first;
		sumtime -= allot[i];
	}
	if(sumtime<0){
		printf("NO\n");
		return 0;
	}else if(sumtime>0){
		for(int i=0; i<d; i++){
			allot[i] += min(limits[i].second-limits[i].first, sumtime);
			sumtime -= min(limits[i].second-limits[i].first, sumtime);
			if(sumtime == 0){
				break;
			}
		}
	}
	if(sumtime>0){
		printf("NO\n");
	}else{
		printf("YES\n");
		for(int i=0; i<d; i++){
			printf("%d ", allot[i]);
		}
		puts("");
	}
	return 0;
}
