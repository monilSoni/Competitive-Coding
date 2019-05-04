
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

/* Editorial: O(N ^ 3) method: The first thing to observe is that constrains are slow enough to allow a brute force algorithm. Using brute force, I can calculate for each possible single move the number of 1s resulting after applying it and take maximum. For consider each move, I can just generate with 2 FOR loops all indices i, j such as i <= j. So far we have O(N ^ 2) complexity. Suppose I have now 2 fixed vaIues i and j. I need to calculate variable cnt (initially 0) representing the number of ones if I do the move. For do this, I choose another indice k to go in a[] array (taking O(N) time, making the total of O(N ^ 3) complexity). We have two cases: either k is in range [i, j] (this means i <= k AND k <= j) or not (if that condition is not met). If it’s in range, then it gets flipped, so we add to count variable 1 – a[k] (observe that it makes 0 to 1 and 1 to 0). If it’s not in range, we simply add to cnt variable a[k]. The answer is maximum of all cnt obtained.

O(N) method: For achieve this complexity, we need to make an observation. Suppose I flip an interval (it does not matter what interval, it can be any interval). Also suppose that S is the number of ones before flipiing it. What happens? Every time I flip a 0 value, S increases by 1 (I get a new 1 value). Every time I flip a 1 value, S decreases by 1 (I loose a 1 value). What would be the “gain” from a flip? I consider winning “+1” when I get a 0 value and “-1” when I get a 1 value. The “gain” would be simply a sum of +1 and -1. This gives us idea to make another vector b[]. B[i] is 1 if A[i] is 0 and B[i] is -1 if A[i] is 1. We want to maximize S + gain_after_one_move sum. As S is constant, I want to maximize gain_after_one_move. In other words, I want to find a subsequence in b[] which gives the maximal sum. If I flip it, I get maximal number of 1s too. This can be founded trivially in O(N ^ 2). How to get O(N)? A relative experienced programmer in dynamic programming will immediately recognize it as a classical problem “subsequence of maximal sum”. If you never heard about it, come back to this approach after you learn it. 
*/

int main(){
	int n, x, count=0; 
	scanf("%d",&n);
	vector<int> v;
	rep(i, 0, n){
		scanf("%d",&x);
		(x==1)?v.pb(-1):v.pb(1);
		count+=x;
	}
	int sum = 0;
        int maxsum = INT_MIN;
        for(int i=0; i<v.size(); i++){
                sum+=v[i];
                if(maxsum < sum)
                        maxsum = sum;
                if(sum<0)
                        sum=0;
        }
	printf("%d\n", maxsum+count);
	return 0;
}


