
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

ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode* prev = new ListNode(0);
    ListNode* dummy = new ListNode(0);
    dummy = prev;

    int a, b, c = 0;
    while(A != NULL || B != NULL){
        a = (A) ? A->val : 0;
        b = (B) ? B->val : 0;
        ListNode* s = new ListNode((a+b+c)%10);
        prev->next = s;
        prev = s;
        c = (a+b+c)/10;
        if(A) A = A->next;
        if(B) B = B->next;
    }

    if(c){
        ListNode* s = new ListNode(c);
        prev->next = s;
    }

    return dummy->next;
}
