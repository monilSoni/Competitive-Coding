#include<bits/stdc++.h>
using namespace std;

int summ(int n){
	return (n*(n+1))/2;
}

int main(){
	int n, x, min_no = INT_MAX;
	int sum = 0;
	scanf("%d",&n);
	unordered_set<int> s;
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		sum+=x;
		if(s.find(x) == s.end())
			s.insert(x);
		else
			cout << x << " ";
		min_no = min(x,min_no);
	}
	int idealsum = summ(min_no+n-1) - summ(min_no-1);
	printf("\n%d %d %d %d\n", sum, idealsum, min_no, (int)s.size());
	printf("%d\n", idealsum - sum);
	return 0;
}
