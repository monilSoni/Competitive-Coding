
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
ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    ListNode* prev = new ListNode(0);
    ListNode* curr = A;
    ListNode* next;
    for(int i=1; i<m; i++){
        prev = curr;
        curr = curr->next;
    }

    ListNode* dummy_1 = prev;
    ListNode* dummy_2 = curr;
    for(int i=0; i<=n-m; i++){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    dummy_1 ->next = prev;
    dummy_2 ->next = curr;

    return (m == 1) ? dummy_1->next : A;
}
