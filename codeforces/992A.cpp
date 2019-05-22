#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	unordered_set<int> s;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		if(x!=0){
			s.insert(x);
		}
	}
	printf("%ld\n",s.size());
	return 0;
}
