
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pii;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define CLOCK_INIT clock_t start, stop; double t = 0.0; assert((start = clock())!=-1);
#define CLOCK_END stop = clock(); t = (double) (stop-start)/CLOCKS_PER_SEC; printf("Run time: %f\n", t); 

long long int gcd( long long int a , long long int b){
    if(!a)
        return b;
    return gcd(b%a, a);    
}

int main(){
    LL l, r;
    scanf("%lld %lld", &l, &r);

    for(LL a = l; a <= r; a++)
        for(LL b = a + 1; b <=r; b++)
            for(LL c = b + 1; c <=r; c++)
                if(gcd(a, c) != 1 && gcd(a, b) == 1 && gcd(b, c) == 1){
                    printf("%lld %lld %lld\n", a, b, c);
                    return 0;
                }

    printf("-1\n"); 
    return 0;
}

