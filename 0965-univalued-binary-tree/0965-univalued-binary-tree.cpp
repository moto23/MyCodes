class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(!root)  return true;
         if ((root->left && root->val != root->left->val) || (root->right && root->val != root->right->val))
            return false;
        return isUnivalTree(root->left) && isUnivalTree(root->right);
    }
};