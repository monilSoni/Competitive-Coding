
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
	int nodes, edges, x, y, w;
	scanf("%d %d",&nodes,&edges);
	vector<vector<int>> distance(nodes+1, vector<int> (nodes+1, 10000));
	for(int i=0; i<edges; i++){
		scanf("%d %d %d", &x, &y, &w);
		distance[x][y] = w;
	}

	for(int k=1; k<=nodes; k++){
		for(int i=1; i<=nodes; i++){
			for(int j=1; j<=nodes; j++){
				distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);
			}
		}
	}
	
	for(int i=2; i<=nodes; i++){
		printf("%d ", distance[1][i]);
	}puts("");

	return 0;
}
