
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

vector<vector<int>> threeSum(vector<int> &A) {
    vector<vector<int>> result;
    if(A.size() < 3)
        return result;
    sort(A.begin(), A.end());

    set<vector<int>> temp_result;
    for(int i=0; i<A.size()-2; i++){
        int start = i+1, end = A.size()-1;
        while(start < end){
            if(A[i]+A[start]+A[end] == 0){
                vector<int> v = {A[i], A[start], A[end]};
                temp_result.insert(v);
                start++, end--;
            }else if(A[start] + A[end] < -A[i]){
                start++;
            }else{
                end--;
            }
        }
    }

    for(auto itr : temp_result) result.push_back(itr);

    return result;
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
