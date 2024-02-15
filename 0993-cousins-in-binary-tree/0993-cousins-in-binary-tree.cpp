class Solution {
public:
    void find(TreeNode* root,int count,int &l1,int &l2,TreeNode*& c1,TreeNode*& c2,int x,int y){
        if(root==NULL) return;
        if((root->left!=NULL && root->left->val==x)||(root->right!=NULL && root->right->val==x)){
            l1 = count;
            c1 = root;
            return;
        }
       else if((root->left!=NULL && root->left->val==y)||(root->right!=NULL && root->right->val==y)){
            l2 = count;
            c2 = root;
            return;
        }  
        find(root->left,count+1,l1,l2,c1,c2,x,y);
        find(root->right,count+1,l1,l2,c1,c2,x,y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x ||root->val==y) return false;
        TreeNode*  c1= NULL;
        TreeNode*  c2 = NULL;
        int l1 = 0;
        int l2 = 0;
        find(root,1,l1,l2,c1,c2,x,y);
        return(c1!=c2) && (l1==l2);
    }
};