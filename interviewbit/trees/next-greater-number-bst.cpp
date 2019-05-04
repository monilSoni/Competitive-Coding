
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

TreeNode* Solution::getSuccessor(TreeNode* root, int x) {
    TreeNode* temp = root;
    unordered_map<int, TreeNode* > hash;
    stack<int> s;
    while(temp->val != x){
        s.push(temp->val);
        hash[temp->val] = temp;
        if(x<temp->val){
            temp = temp->left;
        }else{
            temp = temp->right;
        }
    }

    if(temp->right!=NULL){
        temp = temp->right;
        while(temp->left!=NULL){
            temp = temp->left;
        }
        return temp;
    }else{
        while(!s.empty() && s.top()<x){
            s.pop();
        }
        if(!s.empty()){
            return hash[s.top()];
        }else{
            return NULL;
        }
    }
}



/* Fastest Solution
TreeNode* Solution::getSuccessor(TreeNode*root, int B) {
    TreeNode * curr = root;
    TreeNode *suc = NULL;

    while(curr)
    {
        if(curr->val > B)
        {
            suc = curr;
            curr = curr->left;
        }else
        {
            curr = curr->right;
        }
    }
    return suc;
}

*/
