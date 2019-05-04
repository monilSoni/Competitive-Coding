#include <bits/stdc++.h>
using namespace std;

/* Alternative: Editorial solution
   Idea is to find longest palindrome length starting from index 0 . Differece of this length from string length is the required value
	int Solution::solve(string A) {
	int start = 0 , end = A.length()-1;
	int temp_end = end;
	while(start<=temp_end){
		if(A[start]==A[temp_end]){
		    start++;
		    temp_end--;
		} else{
		    start = 0;
		    temp_end = --end;
		}
	}
	return A.length()-(end+1);
	}

*/


int solve(string str){
	int low;
	int high;
	int mid = str.length()/2;
	bool flag = true;
	while(mid>0){
		if(flag){
			low = mid-1;
			high = mid+1;
			flag = false;
		} else{
			low = mid-1;
			high = mid;
			flag = true;
			mid--;
		}

		while(low>=0 && high<str.length()){
			if(tolower(str.at(low)) != tolower(str.at(high)))
				break;
			low--;
			high++;
		}
		if(low < 0)
			return str.length()-high;
	}
	return str.length()-1;
}

int main(){
	string s;
	cin >> s;
	printf("%d\n", solve(s));
	return 0;
}
