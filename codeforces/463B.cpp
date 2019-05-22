#include<bits/stdc++.h>
using namespace std;

/* One of the users suggested on the blog entry that this problem can be solved by taking the maximum of all heights. This works because of law of conservation of energy. In order to reach the top most height you must have that much energy from the beginning. I feel so stupid now */

int main(){
	int n, x;
	scanf("%d",&n);
	long long sum = 0, x_prev = 0, total = 0;
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		sum = sum + x_prev - x;
		if(sum < 0){
			total+=abs(sum);
			sum = 0;
		}
		x_prev = x;
	}
	printf("%lld\n", total);
	return 0;
}
