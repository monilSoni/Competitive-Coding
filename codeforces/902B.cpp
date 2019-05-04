
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

void dfs(vector<vector<int>> &v, int vertex, int color, int &counter, vector<int> &C){
	if(color!=C[vertex]){
		counter++;
		color=C[vertex];
	}
	for(int i=0; i<v[vertex].size(); i++){
		dfs(v, v[vertex][i], color, counter, C);
	}
	return ;
}

int main(){
	int nodes, x, y;
	scanf("%d",&nodes);
	vector<vector<int>> v(nodes+1);
	for(int y=2; y<=nodes; y++) {
		scanf("%d", &x);
		v[x].push_back(y);
	}
	vector<int> C(nodes+1);
	rep(i,1,nodes+1){
		scanf("%d",&C[i]);
	}
	int counter = 1;
	dfs(v, 1, C[1], counter, C);
	printf("%d\n", counter);
	return 0;
}
