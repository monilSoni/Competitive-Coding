#include<bits/stdc++.h>
using namespace std;

/*MUST READ EDITORIAL, it provides an interesting way to replace those two if statements used to calculate the number of shelves required to place the medals and the cups: Because rewards of one type can be on one shelf, lets calculate number of cups — a and number of medals — b. Minimum number of shelves that will be required for all cups can be found by formula (a + 5 - 1) / 5. The same with shelves with medals: (b + 10 - 1) / 10. If sum of this two values more than n then answer is "NO" and "YES" otherwise. */

int main(){
	int c=0, m=0, n, x;
	for(int i=0; i<3; i++){
		scanf("%d",&x);
		c+=x;
	}
	for(int i=0; i<3; i++){
		scanf("%d",&x);
		m+=x;
	}
	scanf("%d",&n);
	(c%5==0)? c/=5: c=(c/5)+1;
	(m%10==0)? m/=10: m=(m/10)+1;
	(c+m<=n)? printf("YES\n"): printf("NO\n");
	return 0;
}
