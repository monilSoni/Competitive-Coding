#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, m, a, b;
	scanf("%lld %lld %lld %lld",&n, &m, &a, &b);
	printf("%lld\n", min((n%m)*b, (m-(n%m))*a));
	return 0;
}

