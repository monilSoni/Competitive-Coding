
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

int solve(vector<int> &a){
	bool isFirst = true;
        if(a.size() < 3) return a.size();
        int index = 0;
        for(int i=0; i<a.size()-2; i++){
                if(a[i]==a[i+1] && a[i]==a[i+2] && isFirst){
                        index = i;
                        isFirst = false;
                }else if(a[i]==a[i+1] && a[i] == a[i+2]){
                    continue;
                }else{
                    a[index++] = a[i];
                }
        }
        a[index++] = a[a.size()-2];
        a[index++] = a[a.size()-1];
        a.erase(a.begin()+index, a.end());
	return a.size();
}

int main(){
	int n,x;
	vector<int> v;
	scanf("%d",&n);
	_for(i,n){
		scanf("%d",&x);
		v.pb(x);
	}
	printf("\n%d\n",solve(v));
	return 0;
}

