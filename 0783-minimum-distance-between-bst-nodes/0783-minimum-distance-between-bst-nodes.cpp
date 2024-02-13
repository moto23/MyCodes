class Solution {
public:
vector<int>inorder;

//inorder traversal apply because it store value in sorted array
void inorderTraversal(TreeNode* root){
    if(root == NULL){
        return ;
    }
        inorderTraversal(root->left);
        inorder.push_back(root->val);
        inorderTraversal(root->right);
    
}

    int minDiffInBST(TreeNode* root) {
       
           inorderTraversal(root);

           int ans=INT_MAX;

            //calculate minimum difference i -  i-1
           for(int i=1;i<inorder.size();i++){
              ans= min(ans,inorder[i]-inorder[i-1]);

           }
           return ans;
    }
};