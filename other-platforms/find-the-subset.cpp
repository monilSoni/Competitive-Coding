#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, d, x;
	scanf("%d %d %d",&n, &m, &d);
	vector<int> v, aux;
	for(int i=0; i<m; i++){
		scanf("%d",&x);
		v.push_back(x);
		aux.push_back(x);
	}
	sort(aux.begin(), aux.end());
	for(int i=1; i<=m-n; i++){
		v.erase(find(v.begin() ,v.end(), aux[m-i]));
	}
	for(int i=0; i<v.size(); i++){
		printf("%d ", v[i]);
	}
	printf("\n");
	return 0;
}

	
