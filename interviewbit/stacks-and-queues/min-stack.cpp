
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

stack<int> minstack;
stack<int> s;

MinStack::MinStack() {
    while(!s.empty()){
        s.pop();
    }
    while(!minstack.empty()){
        minstack.pop();
    }
}

void MinStack::push(int x) {
    if(minstack.empty()){
        minstack.push(x);
    }else if(x <= minstack.top())
        minstack.push(x);
    else
        minstack.push(minstack.top());
    s.push(x);
}

void MinStack::pop() {
    if(!s.empty()){
        s.pop();
        minstack.pop();
    }
}

int MinStack::top() {
    if(s.empty()) return -1;
    return s.top();
}

int MinStack::getMin() {
    if(minstack.empty()) return -1;
    return minstack.top();
}


