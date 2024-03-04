/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };.cpp
 */
class Solution {
public:
    vector<int>ans;
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        dfs(root,0);
        return ans;

    }
    void dfs(TreeNode* root, int level){
        if(root==NULL) return;
        if(level==ans.size()){
            ans.push_back(root->val);
        }
        dfs(root->right,level+1);
        dfs(root->left,level+1);
    }

};
