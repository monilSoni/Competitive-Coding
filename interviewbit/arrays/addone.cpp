#include <bits/stdc++.h>

int main(){
	bool flag = false;
	int n = 0, x = 0;
	std::vector<int> A;
	std::cin >> n;
	for(int i = 0; i<n; i++){
		std::cin >> x;
		A.push_back(x);
	}
	int j = 0;
	while(A[j]==0){
		j++;
	} A.erase(A.begin(), A.begin()+j);
	for(int i = A.size()-1; i>-1; i--){
		A[i] = A[i] + 1;
		if(A[i] == 10){
			A[i] = 0;
			continue;
		}
		else{
			flag = true;
			break;
		}
	}
	if(flag == false){
		A.insert(A.begin(), 1);
	}
	for(int i=0; i<A.size(); i++){
		std::cout << A[i] << " ";
	} printf("\n");
	return 0;
}
