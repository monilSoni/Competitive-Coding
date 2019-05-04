#include<bits/stdc++.h>
using namespace std;

vector<int> equal(vector<int> &A) {
    vector<int> result;
    unordered_map<int, vector<int>> hash;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(hash.find(A[i]+A[j])!=hash.end()){
                vector<int> x = hash[A[i]+A[j]];
                result.push_back(x[0]);
                result.push_back(x[1]);
                result.push_back(i);
                result.push_back(j);
                return result;
            }
            if(hash.find(A[i]+A[j]) == hash.end()){
                vector<int> x = {i, j};
                hash[A[i]+A[j]] = x;
            }
        }
    }
    
    result.clear();
    return result;
}

int main(){
	int n, x;
	vector<int> v;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		v.push_back(x);
	}
	v = equal(v);
	return 0;
}
