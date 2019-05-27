
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pi;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define CLOCK_INIT clock_t start, stop; double t = 0.0; assert((start = clock())!=-1);
#define CLOCK_END stop = clock(); t = (double) (stop-start)/CLOCKS_PER_SEC; printf("Run time: %f\n", t); 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
struct compare{
    bool operator() (pair<int, ListNode*> a, pair<int, ListNode*> b){
        return a.first > b.first;
    }
};
 
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, compare> q;
    for(int i=0; i<A.size(); i++)
        if(A[i])
            q.push(make_pair(A[i]->val, A[i]));
    
    ListNode* head = new ListNode(0);
    ListNode* prev = new ListNode(0);
    head = prev;
    while(!q.empty()){
        pair<int, ListNode*> x = q.top(); q.pop();
        ListNode* l = new ListNode(x.first);
        prev->next = l;
        prev = prev->next;
        if(x.second->next){
            q.push(make_pair(x.second->next->val, x.second->next));
        }
    }
    return head->next;
}

