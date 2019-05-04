
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

int countnine(LL x){
	int count = 0;
	while(x%10 == 9){
		count++;
		x/=10;
	}
	return count;
}

LL power(int x){
	LL result = 1;
	for(int i=0; i<x; i++) result*=10;
	return result;
}

int countdig(LL p){
	int count = 0;
	while(p){
		count++;
		p/=10;
	}
	return count;
}

int main(){
	LL p, d, max_count, count, result, x;
	cin >> p >> d;
	max_count = countnine(p);
	result = p;
	for(int i=countdig(p)-1; i>=0; i--){
		x = (p/power(i))*power(i)-1;
		if(p-x>d) continue;
		count = countnine(x);
		if(count > max_count){
			max_count = count;
			result = x;
		}else if(count == max_count){
			result = max(result, x);
		}
	}
	cout << result << "\n";
	return 0;
}
