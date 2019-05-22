
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

int Solution::lPalin(ListNode* A) {
    int n = length(A);
    ListNode* current = A; // Pointer to head
    ListNode* prev = NULL;
    ListNode* next;
    for(int i=0; i<n/2; i++){
        next = current->next; // Create a copy of the next element
        current->next = prev; // Redirect the element
        prev = current;
        current = next;
    }
    ListNode* head1 = prev;
    if(n%2!=0){
        current = current->next;
    }
    ListNode* head2 = current;

    for(int i=0; i<n/2; i++){
        if(head1->val != head2->val)
            return 0;
        head1 = head1->next;
        head2 = head2->next;
    }

    return 1;
}

