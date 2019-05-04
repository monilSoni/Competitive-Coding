#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
   if (a == 0)
        return b;
    return gcd(b%a, a);
}


int main(){
	long long l,r,x,y, count=0;
	scanf("%lld %lld %lld %lld", &l, &r, &x, &y);
	long long product = x*y;
	vector<int> v;
	for(int i=1; i*i<=y; i++){
		if(y%i==0){
			v.push_back(i);
			if(i*i!=y)
				v.push_back(y/i);
		}
	}

	for (int i : v) if (l <= i && i <= r)
			for (int j : v) if (l <= j && j <= r)
				count += gcd(i, j) == x && (long long)i * j / x == y;
	printf("%lld\n", count);
	return 0;
}
