#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	printf("%d\n", min((k*l)/nl, min(c*d, p/np))/n);
	return 0;
}
