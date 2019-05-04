#include<bits/stdc++.h>
using namespace std;

int main(){
	int b, g, biterator=0, giterator=0;
	vector<int> boys, girls;
	int count = 0;
	scanf("%d", &b);
	for(int i=0; i<b; i++){
		scanf("%d",&count);
		boys.push_back(count);
	}

	scanf("%d", &g);
	for(int i=0; i<g; i++){
		scanf("%d",&count);
		girls.push_back(count);
	}
	count = 0;
	sort(boys.begin(), boys.end());
	sort(girls.begin(), girls.end());
	while(biterator<b && giterator<g){
		if(abs(boys[biterator]-girls[giterator])<=1){
			biterator++;
			giterator++;
			count++;
		}else if(boys[biterator]<girls[giterator]){
			biterator++;
		}else{
			giterator++;
		}
	}
	printf("%d\n",count);
	return 0;
}
