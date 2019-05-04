
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define _for(i,n) for(int i=0; i<n; i++)
#define __for(i,n) for(int i=1; i<=n; i++)
#define REP(i,s,n)  for (int i=(s),_n=(n);i<=_n;i++)
#define FOR(i,n)  for (int i=0,_n=(n);i<_n;i++)
#define REPD(i,e,s)  for (int i=(e),_s=(s);i>=_s;i--)
#define tr(container, it) \
	for (typeof(container.begin()) it=container.begin(); it!=container.end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

/*Now look at A[i-1]. All elements with index smaller than i - 1 and greater than A[i-1] are useless to us because they would never qualify for G[i], G[i+1], ...

Using the above fact, we know that we only need previous numbers in descending order.
This is a very nice approach. 
1. Delete the elements greater than A[i]
2. Now, if the next element is less than A[i], we still have elements which are less than A[i] and the ones that we deleted, are anyway greater than A[i]. So if A[i] was useless, obviously, elements greater than A[i] will be useless too.
3. If the next element is greater than A[i] then A[i] is the solution.

*/
vector<int> Solution::prevSmaller(vector<int> &A) {
        vector<int> G;
        G.push_back(-1);
        stack<int> s;
        s.push(A[0]);
        for(int i=1; i<A.size(); i++){
            while(s.top()>=A[i]){
                s.pop();
                if(s.empty())
                    break;
            }
            if(s.empty())
                G.push_back(-1);
            else
                G.push_back(s.top());
            s.push(A[i]);
        }

        return G;
    }

