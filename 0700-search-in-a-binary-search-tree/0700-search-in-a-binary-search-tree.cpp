class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)return root;


        if(root->val == val)return root;

        TreeNode*right = NULL;
        TreeNode*left = NULL;
        if(root->val < val){
            right = searchBST(root->right,val);
        }
        else{
            left = searchBST(root->left,val);
        }

        if(right!=NULL) return right;
        if(left!=NULL)return left;

        return NULL;
    }
};