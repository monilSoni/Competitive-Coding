#include<bits/stdc++.h>
using namespace std;

/*So this is one of the tricky but brilliant sums I have seen in a while. The logic here is to figure out if there is any subset in the array which is odd. This is because there will be two cases:
 * 1. If the entire sum is odd. Well, then the first player would sweep the array and win.
 * 2. If the entire sum is even, we need to check if there is such a contiguous block of array which is odd. That will make the rest of the part also odd since the sum of odd and odd is even. Now let us assume that the second player picks a block from the remaining part which is even. 
 * 	1. First player picked odd portion. Another odd portion remains.
 * 	2. Second player picked even portion from the odd, then odd portion has to remain.
 * 	3. First player will pick the remaining odd portion and will win. */

int main(){
	int n;
	scanf("%d",&n);
	int x;
	bool ans = false;
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		ans = (ans|(x&1));
	}
	(ans)?printf("First\n"):printf("Second\n");
	return 0;
}




