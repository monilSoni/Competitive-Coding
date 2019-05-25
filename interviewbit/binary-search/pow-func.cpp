#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n, int d) {
    long long X = (long long)x;
    long long N = (long long)n;
    long long D = (long long)d;
    long long result;
    if(n==0)
        return 1%D;

    long long temp = ((X%D)*(X%D)+D)%D;
    (n%2 == 0) ? 
        result = (pow(temp, N/2, D) + D)%D :
        result = (((X%D)*pow(temp, (N-1)/2, D)%D) + D)%D;

    return (result < 0)? result+D : result;
}

int main(){
	int x, n, d;
	scanf("%d %d %d", &x, &n, &d);
	printf("%d\n", pow(x,n,d));
	return 0;
}
