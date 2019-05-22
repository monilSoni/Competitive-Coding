#include <bits/stdc++.h>
using namespace std;


#define LIMIT 1000000
bool prime[LIMIT];

void sieve(){
	memset(prime, true, sizeof(prime));

	for (int p=2; p*p<=LIMIT; p++){
		if (prime[p] == true){
			for (int i=p*2; i<=LIMIT; i += p)
			prime[i] = false;
		}
	}
}

int main(){
	long long int n,m;
	cin >> m;
	sieve();
	for (size_t i = 0; i < m; i++) {
		cin >> n;
		if (n < 4 || sqrt(n) != floor(sqrt(n))) {
			printf("NO\n");
		} else {
			(prime[(int)sqrt(n)])?printf("YES\n"):printf("NO\n");
		}
	}
	return 0;
}
