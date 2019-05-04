
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define _for(i,n) for(int i=0; i<n; i++)
#define __for(i,n) for(int i=1; i<=n; i++)
#define REP(i,s,n)  for (int i=(s),_n=(n);i<=_n;i++)
#define FOR(i,n)  for (int i=0,_n=(n);i<_n;i++)
#define REPD(i,e,s)  for (int i=(e),_s=(s);i>=_s;i--)
#define tr(container, it) \
	for (typeof(container.begin()) it=container.begin(); it!=container.end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

int solve(vector<int> &a, int target) {
sort(a.begin(), a.end());
    int newdiff;
    int bestdiff = INT_MAX;
    int sum;
    for(int i=0; i<a.size()-2; i++){
	    int start = i+1;
	    int end = a.size()-1;
	    while(start<end){
		    newdiff = abs(target-a[i]-a[start]-a[end]);
		    if(newdiff < bestdiff){
			    bestdiff = newdiff;
			    sum = a[i]+a[start]+a[end];
		    }
		    if(a[start]+a[end] < target-a[i])
			    start++;
		    else if(a[start]+a[end] > target-a[i])
			    end--;
		    else
			    break;
	    }
    }
    return sum;

}


int main(){
	int n;
	int x;
	vector<int> v;
	scanf("%d",&n);
	_for(i,n){
		scanf("%d",&x);
		v.pb(x);
	}
	scanf("%d",&x);
	printf("%d ", solve(v,x));
	return 0;
}
