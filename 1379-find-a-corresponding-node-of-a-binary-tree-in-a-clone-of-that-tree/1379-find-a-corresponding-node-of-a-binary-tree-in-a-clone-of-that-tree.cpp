class Solution {
public:
    void inorder(TreeNode* root, TreeNode* target,TreeNode* &ans){
        if (!root){
            return ;
        }
        inorder(root->left,target,ans);
        if (root->val==target->val){
            ans=root;
        }
        inorder(root->right,target,ans);

    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans=NULL;
        inorder(cloned ,target,ans);
        return ans;


    }
};