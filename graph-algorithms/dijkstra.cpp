
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

typedef pair<int, int> pii;

int main(){
    int nodes, edges, x, y, w;
    scanf("%d %d", &nodes, &edges);
    vector< vector<pii> > v(nodes+1);
    vector<bool> visited(nodes+1, false);
    for(int i=0; i<edges; i++){
        scanf("%d %d %d", &x, &y, &w);
        v[x].push_back(make_pair(w, y));
    }
    priority_queue<pii, vector<pii>, greater<pii> > pq;
    vector<int> distance(nodes+1, 100000);

    distance[1] = 0;
    pq.push(make_pair(0, 1));
    while(!pq.empty()){
        pii p = pq.top(); pq.pop();
        if(!visited[p.second]){
            visited[p.second] = true;
            for(int i=0; i<v[p.second].size(); i++){
                x = p.second;
                y = v[p.second][i].second;
                w = v[p.second][i].first;
                if(distance[y] > distance[x] + w){
                    distance[y] = distance[x] + w;
                    pq.push(make_pair(distance[y], y));
                }
            }
        }
    }

    for(int i=2; i<=nodes; i++){
        printf("%d ", distance[i]);
    }puts("");

    return 0;
}

