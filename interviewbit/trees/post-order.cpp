
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

/* One of the nice approaches that you see once in a while. Unlike complicated ones that gfg suggests, this one is actually better than that. The idea is to get the order in reverse and then reverse it to get the correct output and then return it */

/* pre-order traversal is root-left-right, and post order is left-right-root. modify the code for pre-order to make it root-right-left, and then reverse the output so that we can get left-right-root .

Create an empty stack, Push root node to the stack.
Do following while stack is not empty.

2.1. pop an item from the stack and print it.

2.2. push the left child of popped item to stack.

2.3. push the right child of popped item to stack.

reverse the ouput.
*/
class Solution {
    public:
        vector<int> postorderTraversal(TreeNode *root) {
            stack<TreeNode*> nodeStack;
            vector<int> result;
            //base case
            if(root==NULL)
                return result;
            nodeStack.push(root);
            while(!nodeStack.empty()) {
                TreeNode* node= nodeStack.top();
                result.push_back(node->val);
                nodeStack.pop();
                if(node->left)
                    nodeStack.push(node->left);
                if(node->right)
                    nodeStack.push(node->right);
            }
            reverse(result.begin(),result.end());
            return result;

        }
};


