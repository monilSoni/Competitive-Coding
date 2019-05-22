
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
        A=A->next;
        count++;
    }
    return count;
}

ListNode* Solution::rotateRight(ListNode* A, int k) {
    int len = length(A);
    if(len==1) return A;
    if(k%len == 0) return A;
    k = len-(k%len);
    ListNode* head;
    ListNode* current = A;
    for(int i=1; i<=len; i++){
        if(i==k){
            head = current->next;
            current->next = NULL;
            break;
        }
        current = current->next;
    }

    ListNode* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = A;
    return head;

}

