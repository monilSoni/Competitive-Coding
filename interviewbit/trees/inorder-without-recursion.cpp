
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(s,n) for(int i=s; i<n; i++)
#define repp(s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(x) x.begin(),x.end()

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    TreeNode* current = A;
    stack<TreeNode*> s;
    vector<int> v;
    while(1){
        while(current){
            s.push(current);
            current = current->left;
        }
        if(s.empty() && current == NULL){
            break;
        }else{
            v.push_back(s.top()->val);
            current = s.top()->right;
            s.pop();
        }
    }

    return v;
}

