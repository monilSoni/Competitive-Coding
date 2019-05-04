
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

vector<vector<int> > threeSum(vector<int> &a) {
	sort(a.begin(), a.end());
        vector<int> x;
        vector<vector<int>> v;
        if(a.size() < 3) return v;
        int p = INT_MAX;
        int q = INT_MAX;
        int r = INT_MAX;
        int count = 0;
        for(int i=0; i<a.size()-2; i++){
                int start = i+1;
                int end = a.size()-1;
                while(start<end){
                        if(a[i]+a[start]+a[end] == 0){
                            if(a[start] == a[start-1] && a[end] == a[end+1]){
                                start++;
                                end--;
                                continue;
                            }
                            x.push_back(a[i]);
                            x.push_back(a[start]);
                            x.push_back(a[end]);
                            v.push_back(x);
                            x.clear();
                            start++;
                            end--;
                        }
                        if(a[start]+a[end] < 0-a[i])
                                start++;
                        else if(a[start]+a[end] > 0-a[i])
                                end--;
                }
        }
        set<vector<int>> s( v.begin(), v.end() );
        v.assign( s.begin(), s.end() );
        return v;

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
	vector<vector<int>> ans;
	ans = solve(v);
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<3; j++)
			printf("%d ",ans[i][j] );
		printf("\n");	
	}
		
	return 0;
}
