#include<bits/stdc++.h>
using namespace std;

int v[200005];

int main(){
	int n, x, k;
	long long int count = 0;
	scanf("%d %d",&n,&k);
	for (int i = 0; i < n; i++) {
                scanf ("%d", &x);
                count += v[x^k];
                v[x]++;
        }	
	printf("%lld\n",count);
	return 0;
}
