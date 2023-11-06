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
    vector<int>ans;
    void solve(TreeNode* root, unordered_map<int,int> &check, int h){
        if(!root) return;
        if(!check[h]){
            check[h] = 1;
            ans.push_back(root->val);
        }
        solve(root->right, check, h+1);
        solve(root->left, check, h+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        unordered_map<int,int> check;
        solve(root,check, 1);
        return ans;
    }
};