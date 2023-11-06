/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* lside, TreeNode* rside){
        if(!lside && !rside) return true;
        if((!lside)||(!rside)) return false;

        bool endsym = solve(lside->left,rside->right);
        bool weird = solve(lside->right, rside->left);
        bool nodVal = lside->val == rside->val;

        return endsym && weird && nodVal;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        // bool lsym = isSysmmetric(root->left);
        // bool rsym = isSysmmetric(root->right);
        return solve(root->left, root->right);
        
    }
};