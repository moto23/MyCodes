class Solution {
public:
      void leftSum(TreeNode*root,int &ans){
          if(!root) return ;
           if(root->left && !root->left->left && !root->left->right){
              ans+=root->left->val;
          }
          leftSum(root->left,ans);
          leftSum(root->right,ans);
      }

    int sumOfLeftLeaves(TreeNode* root) {
       int ans =0;
       leftSum(root,ans);
        return ans;
    }
};