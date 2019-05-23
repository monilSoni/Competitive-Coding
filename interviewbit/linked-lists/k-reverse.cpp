
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
int length(ListNode* A){
    int count = 0;
    while(A!=NULL){
        A = A->next;
        count++;
    }
    return count;
}

ListNode* Solution::reverseList(ListNode* A, int B) {
    int n = length(A);
    ListNode* dummy;
    ListNode* prev_dummy;
    ListNode* curr = A;
    ListNode* prev;
    ListNode* next;
    for(int i=0; i<n/k; i++){
        dummy = curr;
        for(int j=0; j<k; j++){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        dummy -> next = curr;
        if(i == 0)
            A = prev;
        else
            prev_dummy->next = prev;
        prev_dummy = dummy;
    }

    return A;
}

/* Above code is done by me. However, I found even faster solution that uses recursion. I guess, recursion is a popular tool for solving linked list problems. Find the code below. However, it does not follow the constant space constraint as recursion takes up stack space.


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };

ListNode* Solution::reverseList(ListNode* A, int B) {

    struct ListNode* current = A;
    struct ListNode* next = NULL;
    struct ListNode* prev = NULL;
    int count = 0;

    //reverse first k nodes of the linked list
    while (count < B)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    if(next!=NULL)
    A->next=reverseList(next,B);
     return prev;
}
*/

