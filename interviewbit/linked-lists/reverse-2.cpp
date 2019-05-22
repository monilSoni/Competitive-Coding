
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


ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    ListNode* previous = NULL;
    ListNode* current = A;
    ListNode* prev;
    ListNode* curr;
    ListNode* next;
    int len = length(A);
    if(len == 1) return A;
    for(int i=1; i<=len; i++){
        if(i == m){
            prev = NULL;
            curr = current;
            while(i++ <= n){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            if(m!=1) previous->next = prev;
            current->next = curr;
            break;
        }
        previous = current;
        current = current->next;
    }

    if(m == 1) return prev;
    return A;
}

/*Below is the editorial solution. It uses a function to reverse the linked list, adjusts the pointers and then returns it. It is a clean implementation of the thing that I did with iteration

    // Reverses the linkedList which starts from head, and extends to size nodes.
    // Returns the end node.
    // Also sets the head->next as endNode->next.
    ListNode *reverseLinkedList(ListNode *head, int size) {
    if (size <= 1) return head;
        ListNode *cur = head, *nextNode = head->next, *tmp;

    for (int i = 0; i < (size - 1); i++) {
        tmp = nextNode->next;
        nextNode->next = cur;
        cur = nextNode;
        nextNode = tmp;
    }

    head->next = nextNode;
    return cur;
    }

    ListNode *reverseBetween(ListNode *head, int m, int n) {
    // Introduce dummyhead to not handle corner cases.
    ListNode* dummyHead = new ListNode(0);
    dummyHead->next = head;

    // Figure out the start node of the sublist we are going to reverse
      ListNode* prev = dummyHead;
    ListNode* cur = head;
    int index = 1;
    while (index < m) {
        prev = cur;
        cur = cur->next;
        index++;
    }

    // At this point, we have start of sublist in cur, prev of startSubList in prev.
    // Lets reverse the sublist now.
    ListNode* endSubList = reverseLinkedList(cur, n - m + 1);
    prev->next = endSubList;

    return dummyHead->next;
    }
};*/
