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
 #define ll long long
class Solution {
public:
ll pathSum_x(TreeNode* root, ll targetSum) {
        if(root==NULL) return 0;
        ll cnt = 0;
        if(root->val==targetSum) cnt++;
        cnt += pathSum_x(root->left,targetSum-root->val);
        cnt += pathSum_x(root->right,targetSum-root->val);
        return cnt;
    }
    ll pathSum(TreeNode* root, ll targetSum) {
        if(root==NULL) return 0;
        return pathSum(root->left,targetSum) + pathSum_x(root,targetSum) + pathSum(root->right,targetSum);
    }
};
