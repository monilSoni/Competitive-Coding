#include <bits/stdc++.h>
using namespace std;

struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};

bool compare(const Interval &a, const Interval &b) // Helper function to sort the vector. This is the usual method to sort a vector of structs
{
    return a.start < b.start;
}

vector<Interval> Solution::insert(vector<Interval> &a, Interval newInterval) {
        int b1, e1;
        int b2, e2;
        a.push_back(newInterval);
        vector<Interval> b;
        sort(a.begin(), a.end(), compare);
        b.push_back(a[0]);
        for(int i=1, j=0; i<a.size(); i++){
                e1 = b[j].end;
                b2 = a[i].start;
                e2 = a[i].end;
                if(b2<=e1){ // If the intervals intersect
                        if(e2 > e1)  b[j].end = e2;
                }else{ // New interval
                    b.push_back(a[i]);
                    j++;
                }
        }

        return b;
}


int main(){
	int n;
	int start, end;
	scanf("%d", &n);
	vector<Interval> a;
	for(int i=0; i<n; i++){
		scanf("%d %d",&start,&end);
		a.push_back(Interval(start, end));
	}
	a = merge(a);
	for(int i=0; i<a.size(); i++){
		printf("[%d, %d] ", a[i].start, a[i].end);
	}
	printf("\n");	
	return 0;
}
