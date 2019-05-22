
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
    ListNode* current = A;
    ListNode* head1;
    ListNode* head2;
    ListNode* prev1;
    ListNode* prev2;
    ListNode* temp;
    int count1 = 0, count2 = 0;
    bool isFirst1 = true, isFirst2 = true;
    while(current!=NULL){
        temp = new ListNode(current->val);
        if(current->val < B){
            count1++;
            if(isFirst1){
                head1 = temp;
                isFirst1 = false;
            } else{
                prev1->next = temp;
            }  prev1 = temp;
        } else{
            count2++;
            if(isFirst2){
                head2 = temp;
                isFirst2 = false;
            } else{
                prev2->next = temp;
            } prev2 = temp;
        } 
        current = current->next;
    }
    if(count1 == 0){
        return head2;
    } else if(count2 == 0){
        return head1;
    }
    prev1->next = head2;
    return head1;
}


/* Following is the editorial solution. It sort of captures the alternative method that I thought of, that is appending numbers greater to end of the list. 
   You will need to maintain two pointers,a start and an end. And going through the list we check if the number is greater, if it is we then append it to the end of the list 

   ListNode *partition(ListNode *head, int x) {

            if (!head) return NULL;
            ListNode * iterator = head;

            ListNode * start = new ListNode(0); // list of nodes greater than x
            ListNode * tail = start;

            ListNode * newHead = new ListNode(0);
            newHead -> next = head;
            ListNode * pre = newHead; // previous node, we need it for removing


            while (iterator) {
                if (iterator -> val >= x) {
                    pre -> next = iterator -> next; // remove from our list
                    tail -> next = iterator; // add to list of nodes greater than x
                    tail = tail -> next;
                    iterator = iterator -> next;
                    tail -> next = NULL;
                }
                else
                    pre = iterator, iterator = iterator -> next;
            }
            pre -> next = start -> next;
            return newHead -> next;
        }
*/
