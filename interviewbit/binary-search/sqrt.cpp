#include<bits/stdc++.h>
using namespace std;

/* The editorial solution handles the overflowing int case better
 * int sqrt(int x) {
            if (x == 0) return 0;
            int start = 1, end = x, ans;
            while (start <= end) {
                int mid = (start + end) / 2;
                if (mid <= x / mid) {
                    start = mid + 1;
                    ans = mid;
                } else {
                    end = mid - 1;
                }
            }
            return ans;
        }
 */

int sqrt(int x){
    long long lo = 0, hi = (long long)A, mid, ans;
    while(lo < hi){
        mid = lo + (hi-lo+1)/2;
        if(mid*mid == A)
            return mid;
        else if(mid*mid < A)
            lo = mid;
        else
            hi = mid-1;
    }
    return hi;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", sqrt(n));
	return 0;
}
