
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

vector< vector<int> > v(1000000, vector<int>(3, 0));
vector<int> dist(10000, 10000);

int main(){
	int nodes, edges, x, y, w;
	scanf("%d %d",&nodes,&edges);
	for(int i=0; i<edges; i++){
		scanf("%d %d %d",&x,&y,&w);
		v[i][0] = x;
		v[i][1] = y;
		v[i][2] = w;
	}
	cout << "HELLO\n";
	dist[1] = 0;
	for(int i=0; i<nodes-1; i++){
		cout << i << "\n";
		for(int j=0; j<edges; j++){
			if(dist[ v[j][1] ] > dist[ v[j][0] ] + v[j][2]){
				dist[ v[j][1] ] = dist[ v[j][0] ] + v[j][2];
			}
		}
	}
	for(int i=2; i<= nodes; i++){
		printf("%d ", dist[i]);
	}printf("\n");
	return 0;
}

