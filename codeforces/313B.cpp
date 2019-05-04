#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, l, r;
	string str;
	cin >> str;
	vector<int> v(str.length()+1, 0);
	for(int i=0; i<str.length()-1; i++){
		(str[i]==str[i+1])?v[i+1]=v[i]+1:v[i+1]=v[i];
	}
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &l, &r);
		printf("%d\n",v[r-1]-v[l-1]);
	}
	return 0;
}
