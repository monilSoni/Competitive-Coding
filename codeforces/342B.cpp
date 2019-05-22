
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
	int n, m, s, f, c;
	char dir;
	int move;
	scanf("%d %d %d %d", &n, &m, &s, &f);
	vector<vector<int>> T(m, vector<int>(3,0));
	rep(i,0,m) scanf("%d %d %d", &T[i][0], &T[i][1], &T[i][2]);

	if(s<f){
		dir = 'R'; move = 1;
	}else{
		dir = 'L'; move = -1;
	}
	c = s;
	int t = 0;
	while(c!=f){
		if((T[t][1] <= c && c <= T[t][2]) || (T[t][1] <= c+move && c+move <= T[t][2])){ // either current spy or the next spy is in range
			printf("X");
		}else{
			c = c + move;
			printf("%c",dir);
		}
		t = (t+1)%m;
	}
	printf("\n");
	return 0;
}
