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
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        if(root->left == NULL and root->right == NULL){
            return 1;
        }
        int ans = 1;// root node is a good one so ans = 1 default
        ans += dfs(root->left,root->val);
        ans += dfs(root->right,root->val);
        return ans;
    }
    int dfs(TreeNode* node, int mx){
        if(!node) return 0;
        int cnt = 0;
        if(node->val >= mx){
            mx = node->val;
            cnt++;
        }
        cnt += dfs(node->left,mx);
        cnt += dfs(node->right,mx);
        return cnt;
    }
};
