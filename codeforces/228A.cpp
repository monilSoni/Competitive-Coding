#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	unordered_set<int> hash;
	for(int i=0; i<4; i++){
		scanf("%d",&x);
		hash.insert(x);
	}
	printf("%ld\n",4-hash.size());
	return 0;
}
