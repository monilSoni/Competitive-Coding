
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

int gcd(int a, int b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

int print (int a, int b) {
    int c = gcd (a, b);
    printf ("%d/%d\n", a / c, b / c);
    return 0;
}

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if (a * d == b * c) printf ("0/1\n"); else
    	if (a * d - b * c > 0) print (a * d - b * c, a * d); else print (b * c - a * d, b * c);
	return 0;
}
