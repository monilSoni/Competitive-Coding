
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
	int n;
        scanf("%d",&n);
        vector<int> v(n), I(n, 1), D(n, 1);
        rep(i, 0, n){
                scanf("%d",&v[i]);
        }

        if(n==0) cout << 0;
        if(n==1) cout << 1;

        rep(i, 1, n){
                rep(j, 0, i){
                        if(v[j]<v[i]){
                            I[i] = max(I[i], I[j]+1);
                        }
                }
        }

        for(int i=n-2; i>=0; i--){
                for(int j=n-1; j>i; j--){
                        if(v[j]<v[i]){
                            D[i] = max(D[i], D[j]+1);
                        }
                }
        }

        int max = INT_MIN;
        rep(i,0,n){
            I[i]+=(D[i]-1);
            if(I[i]>max) max = I[i];
        }
        cout << max << endl;

	return 0;

}

