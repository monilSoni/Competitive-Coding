
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(s,n) for(int i=s; i<n; i++)
#define repp(s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

long long ex, ey;
double dist(long x, long y){
	return sqrt((x-ex)*(x-ex) + (y-ey)*(y-ey));
}

int main(){
	long long t, x, y, sx, sy;
	double newdist;
	string str;
	scanf("%lld %lld %lld %lld %lld", &t, &x, &y, &ex, &ey);
	cin >> str;
	sx = x; sy = y;
	double current = dist(x, y);
	if(current == 0){
		printf("0\n");
		return 0;
	}
	for(int i=0; i<t; i++){
		switch(str[i]){
			case 'N': y++; break;
			case 'S': y--; break;
			case 'E': x++; break;
			case 'W': x--; break;
		}
		if(current > (newdist = dist(x, y))){
			current = newdist;
			sx = x; sy = y;
		}else{
			x = sx; y = sy;
		}
		if(current == 0){
			printf("%d\n",i+1);
			break;
		}
	}
	if(current!=0) printf("-1\n");
	return 0;
}
