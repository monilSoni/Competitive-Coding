
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
	int n, x, y, q;
	scanf("%d",&n);
	vector< vector<int> > v(n+1);
	vector<bool> visited(n+1);
	vector<int> level(n+1);
	rep(i,1,n){
		scanf("%d %d",&x,&y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
	vector<bool> girls(n+1, false);
	scanf("%d",&q);
	rep(i, 0, q){
		scanf("%d",&x);
		girls[x] = true;
	}
	queue<int> bfs;
	bfs.push(1); visited[1] = true; level[1] = 0;

	for(int i=1; i<n+1; i++){
		sort(v[i].begin(), v[i].end());
	}

    int result = -1;
	while(!bfs.empty()){
		int p = bfs.front(); bfs.pop();
		for(int i=0; i<v[p].size(); i++){
			if(!visited[v[p][i]]){
				level[v[p][i]] = level[p]+1;
				if(girls[v[p][i]]){
					if(result == -1){
					    result = v[p][i];
					}else{
					    if(level[v[p][i]]<level[result] || (level[v[p][i]]==level[result] && v[p][i]<result)){
					        result = v[p][i];
					    }
					}
				}
				visited[v[p][i]] = true;
				bfs.push(v[p][i]);
			}
		}
	}
	printf("%d\n", result);
	return 0;
}

