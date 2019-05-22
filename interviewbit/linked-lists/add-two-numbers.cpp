
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

ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode* num = A;
    ListNode* head;
    ListNode* prev;
    int a = length(A);
    int b = length(B);
    ListNode* num1 = A;
    ListNode* num2 = B;
    int carry = 0;
    ListNode* temp;
    bool isFirst = true;
    for(int i=0; i<min(a,b); i++){
        int sum = num1->val + num2->val + carry;
        temp = new ListNode(sum%10);
        carry = sum/10;
        if(isFirst){
            head = temp;
            isFirst = false;
        } else{
            prev->next = temp;
        }
        prev = temp;
        num1 = num1->next;
        num2 = num2->next;
    }
    if(b>a) num1 = num2;
    while(num1!=NULL){
        int sum = num1->val + carry;
        temp = new ListNode(sum%10);
        carry = sum/10;
        prev->next = temp;
        prev = temp;
        num1 = num1->next;
    }

    if(carry!=0){
        temp = new ListNode(carry);
        prev->next = temp;
    }

    return head;
}

/* Below is the editorial solution. The thing to note is how beautifully it merges the cases where one of the lists is shorter than the other. My method was to build upon a simple and more general case in order to cover the corner case. It was clear trailing zeros will be the case when sum is zero and not sum%10. LPT: Next time you think about numbers and linked lists think only about numbers. When will this case arise, what will you do on paper? For example here when one list is smaller than the other you just add zero and append it to the list. Same should be done in code. Anyway have a look below:
 class Solution {
    public:
        ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
            if(!l1)
                return l2;
            if(!l2)
                return l1;

            int carry = (l1->val + l2->val) / 10;
            ListNode *l3 = new ListNode((l1->val + l2->val) % 10);
            ListNode *tail = l3;
            l1 = l1->next;
            l2 = l2->next;

            while(l1 || l2 || carry)
            {
                int sum = ((l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry);
                ListNode *t  = new ListNode(sum % 10);
                carry = sum / 10;                                          

                if(l1)
                    l1 = l1->next;
                if(l2)
                    l2 = l2->next;
                tail->next = t;
                tail = t;
            }

            return l3;
        }
};
*/
