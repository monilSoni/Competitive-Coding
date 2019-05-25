
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pi;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define CLOCK_INIT clock_t start, stop; double t = 0.0; assert((start = clock())!=-1);
#define CLOCK_END stop = clock(); t = (double) (stop-start)/CLOCKS_PER_SEC; printf("Run time: %f\n", t); 



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
    while(A)
        A = A->next, count++;
    return count;
}

ListNode* reverse(ListNode* A){
    ListNode* prev = NULL;
    ListNode* curr = A;
    ListNode* next = A->next;
    while(curr){
        next = curr ->next;
        curr->next = prev;
        prev = curr, curr = next;
    }
    return prev;
}

ListNode* Solution::reorderList(ListNode* A) {
    int n = length(A);
    ListNode* prev;
    ListNode* curr = A;
    for(int i=0; i<(n+1)/2; i++){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    ListNode* l2 = reverse(curr);
    ListNode* l1 = A;
    ListNode* next;
    while(l1 && l2){
        next = l2->next;
        l2->next = l1->next;
        l1->next = l2;
        l1 = l1->next->next;
        l2 = next;
    }

    return A;
}
