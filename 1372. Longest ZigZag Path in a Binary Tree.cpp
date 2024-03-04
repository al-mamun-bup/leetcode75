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
    int ans = 0;
    int dfs(TreeNode* root, int direction, int curr){
        if(root==NULL) return 0;
        ans = max(ans,curr);
        dfs(root->left,0,direction==1 ? curr+1:1);
        dfs(root->right,1,direction!=1 ? curr+1:1);
        return ans;
    }
    int longestZigZag(TreeNode* root) {
        if(root==NULL) return 0;
        dfs(root,0,0);
        dfs(root,1,0);
        return ans;
    }
};
