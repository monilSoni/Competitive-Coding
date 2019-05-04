#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	string s;
	cin >> s;
	int total = 0, local = 0;
	vector<int> v;
	for(int i=0; i<n;){
		local = 0;
		while(i+local<n && s[i+local]=='B'){
			local++;
		}
		if(local>0){
			v.push_back(local);
			total++;
			i += local;
		}else{
			i++;
		}
	}
	printf("%d\n",total);
	for(int i=0; i<total; i++){
		printf("%d ",v[i]);
	}printf("\n");
	return 0;
}

