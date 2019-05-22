
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

int maxArea(vector<int> &A){
	int n = A.size();
	int maxx = INT_MIN;
	stack<int> s;
	int i = 0; 
	while(i<n){
		if(s.empty() || A[s.top()] <= A[i]){
			s.push(i++);
		}else{
			int tp = s.top(); s.pop();
			maxx = max(maxx, A[tp]*(s.empty()? i: i-s.top()-1));
		}
	}

	while(!s.empty()){
		int tp = s.top(); s.pop();
		maxx = max(maxx, A[tp]*(s.empty()? i: i-s.top()-1));
	}

	return maxx;
}

int main(){
	int N;
	scanf("%d",&N);
	vector<int> A(N);
	rep(i,0,N) scanf("%d",&A[i]);
	cout << maxArea(A) << "\n";
	return 0;
}
	

