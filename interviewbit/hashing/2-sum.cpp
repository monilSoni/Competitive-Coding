#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(const vector<int> &A, int B) {
    unordered_map<int, int> hash;
    vector<int> v(2, INT_MAX);
    for(int i=0; i<A.size(); i++){
	    if(hash.find(B-A[i])!=hash.end()){
		    if(v[1]>i){
			    v[0] = hash[B-A[i]]+1;
			    v[1] = i+1;
		    }
	    }
	    if(hash.find(A[i]) == hash.end()){
		    hash[A[i]]=i;
	    }
    } 
    if(v[0]==INT_MAX || v[1] ==INT_MAX)
	    v.clear();
    return v;
}

int main(){
	int n, x;
	vector<int> v;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	scanf("%d",&x);
	v = twoSum(v, x);
	cout << v[0] << " " << v[1] << "\n";
	return 0;
}
