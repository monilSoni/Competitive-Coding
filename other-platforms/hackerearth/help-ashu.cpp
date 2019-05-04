
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

vector<int> A(100005);
vector<int> tree(2000005);

void build(int node, int start, int end){
	if(start == end){
		tree[node] = A[start]%2;
	}else{
		int mid = (end+start)/2;
		build(2*node+1, start, mid);
		build(2*node+2, mid+1, end);
		tree[node] = tree[2*node+1] + tree[2*node+2];
	}
}

void update(int node, int start, int end, int x, int y){
	if(start == end){
		A[x] = y;
		tree[node] = A[x]%2;
	}else{
		int mid = (start+end)/2;
		if(start <= x && x <= mid){
			update(2*node+1, start, mid, x, y);
		}else{
			update(2*node+2, mid+1, end, x, y);
		}
		tree[node] = tree[2*node+1] + tree[2*node+2];
	}
}

int query(int node, int start, int end, int l, int r){
	if(r<start or end<l){
		return 0;
	}
	if(l<=start and end <=r){
		return tree[node];
	}

	int mid = (start+end)/2;
	return query(2*node+1, start, mid, l, r) + query(2*node+2, mid+1, end, l, r);
}


int main(){
	int n;
	scanf("%d",&n);
	rep(i,0,n){
		scanf("%d",&A[i]);
	}
	build(0, 0, n-1);
	int q;
	scanf("%d",&q);
	rep(i,0,q){
		int id, x, y;
		scanf("%d %d %d",&id,&x,&y);
		if(id == 0){
			update(0, 0, n-1, x-1, y);
		}else{
			int result = query(0, 0, n-1, x-1, y-1);
			if(id == 2) printf("%d\n", result);
			else printf("%d\n", y-x+1-result);
		}
	}
	return 0;
}

