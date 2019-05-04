#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int two, three, five, six;
	scanf("%lld %lld %lld %lld",&two, &three, &five, &six);
	long long int x = min(two, min(five, six));
	two-=x;
	long long int y = min(two, three);
	printf("%lld\n", (256*x)+(32*y));
	return 0;
}
