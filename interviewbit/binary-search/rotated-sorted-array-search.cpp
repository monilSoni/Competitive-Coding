#include <bits/stdc++.h>
using namespace std;

int search(const vector<int> &A, int B) {
        int n = A.size();
    int lo = 0, hi = n-1, mid, pivot = n-1;

    while(lo <= hi && A[lo] > A[hi]){
        mid = lo + (hi-lo)/2;
        if(A[(mid-1+n)%n] <= A[mid] && A[mid] > A[(mid+1)%n]){
            pivot = mid;
            break;
        }else if(A[lo] < A[mid])
            lo = mid;
        else
            hi = mid;
    }

    if(A[0] <= B && B <= A[pivot]){
        lo = 0, hi = pivot;
        while(lo <= hi){
            mid = lo + (hi-lo)/2;
            if(A[mid] == B)
                return mid;
            else if(A[mid] < B)
                lo = mid+1;
            else
                hi = mid-1;
        }
    }else{
        lo = pivot+1, hi = n-1;
        while(lo <= hi){
            mid = lo + (hi-lo)/2;
            if(A[mid] == B)
                return mid;
            else if(A[mid] < B)
                lo = mid+1;
            else
                hi = mid-1;
        }
    }
    return -1;
}


int main(){
	int n, x;
	vector<int> v;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		v.push_back(x);
	}
    cin >> x;
	printf("%d\n", search(v, x));
	return 0;
}
