
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

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int r1, r2, c1, c2, d1, d2;
    scanf("%d %d", &r1, &r2);
    scanf("%d %d", &c1, &c2);
    scanf("%d %d", &d1, &d2);
    for(int a = 1;a <= 9; a++){
        for(int b = 1; b <= 9; b++){
            if(a == b)
                continue;
            for(int c = 1; c <= 9; c++){
                if(a == c || b == c) 
                    continue;
                for(int d = 1; d <= 9; d++){
                    if(a == d || b == d || c == d) 
                        continue;
                    if(a+b == r1 && c+d == r2 && a+c == c1 && b+d == c2 && a+d == d1 && b+c == d2){
                        printf("%d %d\n%d %d\n", a, b, c, d);
                        return 0;
                    }
                }
            }
        }
    }

    printf("-1\n");
    return 0;
}
