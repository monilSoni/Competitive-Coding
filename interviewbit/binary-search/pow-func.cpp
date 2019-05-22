#include <bits/stdc++.h>
using namespace std;

int pow(int x_temp, int n_temp, int d_temp) {
    long long int x = x_temp, n = n_temp, d = d_temp;
    long long int ans;
    if(n==0)
        return 1%d;
    else if(n%2==0){
        ans = pow(   ((x%d) * (x%d))%d, n/2, d    );
        if(ans < 0) ans = ans + d;
        return ans;

    }else
        ans = (    x   *  pow(   ((x%d) * (x%d))%d, (n-1)/2, d   )       )%d;
        if(ans < 0) ans = ans + d;
        return ans;
}

int main(){
	int x, n, d;
	scanf("%d %d %d", &x, &n, &d);
	printf("%d\n", pow(x,n,d));
	return 0;
}
