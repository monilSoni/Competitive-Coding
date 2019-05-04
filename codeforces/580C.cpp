#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int n, m, c[228228], o, x, y;
vector<int> a[228228];

//Legend:
//	v: current vertex
//	pr: previous vertex
//	ok is for checking if you've reached the end node. If you have reached the end node, the loop wouldnt start and ok will not reset. 
//	k: this is the main factor. everytime you make a recursive call it will add k+1, and then multiply it with c[a[v][i]] which basically acts as an approval switch. That is if there is a cat on current node it will allow k+1, else it will set k to 0 as the consecutive property will break

void go(int v, int pr, int k){
	if(k>m)
		return;
	int ok = 1;
	for(int i=0; i<a[v].size(); i++){
		if(a[v][i]!=pr)
			ok=0, go(a[v][i], v, (k+1)*c[a[v][i]]);
	}
	o+=ok;
}

int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++){
		scanf("%d",&c[i]);
	}
	for(int i=1; i<n; i++){
		scanf("%d %d", &x, &y), x--, y--, a[x].pb(y), a[y].pb(x);
	}
	go(0, -1, c[0]);
	cout << o << "\n";
	return 0;	
}	
