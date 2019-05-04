/*This is not a complete code with main. This is just the snippet of the function to be implemented*/

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


// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };


int length(ListNode* A){
    int count = 0;
    while(A!=NULL){
        A = A->next;
        count++;
    }
    return count;
}

ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    int lenA = length(A);
    int lenB = length(B);
    if(lenA < lenB){
        int d = lenB-lenA;
        for(int i=0; i<d; i++){
            B = B->next;
        }
    } else{
        int d = lenA-lenB;
        for(int i=0; i<d; i++){
            A = A->next;
        }
    }

    //Both of them at the same starting point
    while(A!=NULL && B!=NULL){
        if(A==B)
            return A;
        else{
            A = A->next;
            B = B->next;
        }
    }

    return NULL;
}

