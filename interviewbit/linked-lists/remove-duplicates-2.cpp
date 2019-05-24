
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
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* dummyhead = new ListNode(0);
    ListNode* current = A;
    dummyhead->next = A;
    ListNode* previous = dummyhead;
    ListNode* temp;
    while(current!=NULL){
        int count = 0;
        temp = current->next;
        while(temp!=NULL && temp->val == current->val){
            temp=temp->next;
            count++;
        }
        if(count == 0){
            previous = current;
            current = current->next;
        }else{
            previous->next = temp;
            current = temp;
        }
    }

    return dummyhead->next;
}



ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* prev = new ListNode(0);
    prev ->next = A;
    ListNode* curr = A;
    ListNode* dummy = prev;

    bool check = false;
    while(curr){
        check = false;
        while(curr && curr->next && curr ->val == curr ->next ->val)
            curr = curr->next, check = true;

        (check) ? prev ->next = curr ->next : prev = curr;
        curr = curr->next;
    }

    return dummy->next;
}


