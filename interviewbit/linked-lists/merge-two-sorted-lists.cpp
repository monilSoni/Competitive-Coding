
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
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* dummyhead = new ListNode(0);
    dummyhead->next = B;
    ListNode* curr1 = A;
    ListNode* curr2 = B;
    ListNode* prev = dummyhead;
    ListNode* temp;
    while(curr1!=NULL || curr2!=NULL){
        if(curr1 == NULL){
            temp = new ListNode(curr2->val);
            curr2 = curr2->next;
        }else if(curr2 == NULL){
            temp = new ListNode(curr1->val);
            curr1 = curr1->next;
        } else if(curr2->val < curr1->val){
            temp = new ListNode(curr2->val);
            curr2 = curr2->next;
        } else if(curr2 == NULL || curr2->val >= curr1->val){
            temp = new ListNode(curr1->val);
            curr1 = curr1->next;
        }
        prev->next = temp;
        prev = prev->next;
    }

    prev->next = NULL;

    return dummyhead->next;
}

