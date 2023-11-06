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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!q && !p) return true;
        if((!p && q) || (p && !q)) return false;
        bool lside = isSameTree(p->left,q->left);
        bool rside = isSameTree(p->right,q->right);
        bool curVal = p->val==q->val;

        return lside && rside && curVal;
    }
};