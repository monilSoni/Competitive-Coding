
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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* l1 = new ListNode(0); l1->next = A;
    ListNode* l2 = new ListNode(0);
    ListNode* dummy1 = l1;
    ListNode* dummy2 = l2;

    ListNode* x = A;
    while(x){
        if(x->val < B){
            l1 ->next = x->next;
            l2->next = x;
            l2 = l2->next;
            x = l1->next;
        }else{
            l1 = x;
            x = x->next;
        }
    }

    l2->next = dummy1->next;
    return dummy2->next;
}
