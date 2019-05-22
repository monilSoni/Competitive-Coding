
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

int solve(vector<int> &A) {
    int i = 0, j = 1, n = A.size(), count = 1;
    if(n < 3)
        return n;

    while(i < n && j < n){
        if(i+1 < n && (A[i] != A[j] || (A[i] == A[j] && count < 2 ))){
            if(A[i] == A[j])
                count ++;
            else
                count = 1;

            A[++i] = A[j];
        }
        j++;
    }

    A.erase(A.begin()+i+1, A.end());
    return A.size();
}

int main(){
	int n,x;
	scanf("%d",&n);
	vector<int> v(n);
	_for(i,n)   cin >> v[i];
	printf("\n%d\n",solve(v));
	return 0;
}

