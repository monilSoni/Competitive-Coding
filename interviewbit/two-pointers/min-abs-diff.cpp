
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

int funcmax(int n1, int n2, int n3){
    if((n1 >= n2) && (n1 >= n3))
        return 0;
    else if ((n2 >= n1) && (n2 >= n3))
        return 1;
    else
        return 2;
}

int funcmin(int n1, int n2, int n3){
    if (n1 <= n2 && n1 <= n3)
        return 0;
    else if (n2 <= n1 && n2 <= n3)
        return 1;
    else
        return 2;
}

int solve(vector<int> &a, vector<int> &b, vector<int> &c) {
    int i = 0, j = 0, k = 0, result = INT_MAX, diff;
    while(i < A.size() && j < B.size() && k < C.size()){
        diff = max(A[i], max(B[j], C[k])) - min(A[i], min(B[j], C[k]));
        result = min(result, abs(diff));
        
        if(A[i] == min(A[i], min(B[j], C[k])))
            i++;
        else if(B[j] == min(A[i], min(B[j], C[k])))
            j++;
        else  k++;
    }
    
    return result;
}

int main(){
    int na, nb, nc;
    cin >> na >> nb >> nc;
    vector<int> a(na), b(nb), c(nc);
    for(int i=0; i<na; i++) cin >> a[i];
    for(int i=0; i<nb; i++) cin >> b[i];
    for(int i=0; i<nc; i++) cin >> c[i];
	printf("%d\n", solve(a,b,c));
	return 0;
}
