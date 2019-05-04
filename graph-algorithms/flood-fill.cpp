
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

bool floodfill(vector<vector<int>> maze, vector<vector<bool>> &visited, int x, int y){
    int tx = maze[0].size()-1;
    int ty = maze.size()-1;

    if(x == tx && y == ty) return true;
    if(x>tx || y>ty) return false;
    if(visited[x][y] == true || maze[x][y] == 0) return false;

    visited[x][y] = true;
    if(floodfill(maze, visited, x+1, y)) return true;
    else if(floodfill(maze, visited, x, y+1)) return true;

    return false;
}

int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    vector<vector<int>> maze(n+1, vector<int>(m+1, 0));
    vector<vector<bool>> visited(n+1, vector<bool>(m+1, false));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            scanf("%d", &maze[i][j]);
        }
    }

    if(floodfill(maze, visited, 1, 1)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}
