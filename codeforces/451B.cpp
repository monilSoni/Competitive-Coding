#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	vector<int> v, temp;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		v.push_back(x);
		temp.push_back(x);
	}
	int count=1;
	sort(temp.begin(), temp.end());
	for(int i=0; i<n-1; i++){
		if(v[i]>v[i+1]){
			while(i+count<v.size() && v[i]>v[i+count]){
				count++;
			}
			reverse(v.begin()+i, v.begin()+i+count);
			if(temp == v){
				printf("yes\n");
				printf("%d %d\n",i+1, i+count);
				return 0;
			}else{
				printf("no\n");
				return 0;
			}
		}
	}
	printf("yes\n1 1\n");
	return 0;
}
			
