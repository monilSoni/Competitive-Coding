//This does not provide with main method. It is just the implementation of the function.

#include <bits/stdc++.h>
using namespace std;

int coverPoints(vector<int> &x, vector<int> &y){
	int dist = 0;
	int n = x.size();
	for(int i=0; i<n-1; i++)
		(abs(x[i]-x[i+1]) < abs(y[i]-y[i+1]))?(dist += abs(y[i]-y[i+1])):(dist += abs(x[i]-x[i+1]));
	return dist
}

