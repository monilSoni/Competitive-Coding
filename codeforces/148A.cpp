#include<bits/stdc++.h>
using namespace std;

/*The number of dragons D can be quite small, so the problem can be solved in a straightforward way, by iterating over dragons 1 through D and checking each dragon individually. Time complexity of such solution is O(D). There exists a smarter solution with O(1) complexity, based on inclusion-exclusion principle. You'll have to count the numbers of dragons which satisfy at least one, two, three or four of the damage conditions Ni, i.e., dragons who have index divisible by LCM of the corresponding sets of numbers. Remember that the number of numbers between 1 and D which are divisible by T equals D / T. Finally, the number of dragons that get damaged equals N1 - N2 + N3 - N4. Youd have to use this method if the total number of dragons was too large for iterating over it. 
 *
 * What you forgot to do was LCM and that is why your answer came 18 and not 17. Remember that!*/

int main(){
	int k, l, m, n, d, count=0;
	scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
	for(int i=1; i<=d; i++) if(i%k==0 || i%l ==0 || i%m == 0 || i%n == 0)	count++;
	printf("%d\n",count);
	return 0;
}
