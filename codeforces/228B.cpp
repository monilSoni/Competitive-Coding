
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
	int na, nb, ma, mb;
	int maxx = INT_MIN, temp, result_x, result_y;
	scanf("%d %d",&na,&ma);
	vector<string> A(na);
	rep(i,0,na)	cin >> A[i];
	
	scanf("%d %d",&nb,&mb);
	vector<string> B(nb);
	rep(i,0,nb)	cin >> B[i];

	for(int x = min(0, 1-na); x<= max(nb-1, nb-na-1); x++){
		for(int y = min(0, 1-ma); y<= max(mb-1, mb-ma-1); y++){
			temp = 0;
			for(int i=0; i<na; i++){
				for(int j=0; j<ma; j++){
					if(i+x < 0 || i+x > nb-1 || j+y < 0 || j+y > mb-1) continue;
					temp += (A[i][j]-'0')*(B[i+x][j+y]-'0');
				}
			}
			if(temp > maxx){
				maxx = temp;
				result_x = x;
				result_y = y;
			}
		}
	}

	printf("%d %d\n", result_x, result_y);
	return 0;
}
