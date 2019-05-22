#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, x, max=INT_MIN, count = 1;
	vector<int> a, b;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		a.push_back(x);
	}
	scanf("%d",&m);
	for(int i=0; i<m; i++){
		scanf("%d", &x);
		b.push_back(x);
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(b[j]%a[i] == 0 && b[j]/a[i] > max){
				max = b[j]/a[i];
				count = 1;
			}else if(b[j]%a[i] == 0 && b[j]/a[i] == max)
				count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
