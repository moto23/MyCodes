class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool isSub = false;
        if(!root && !subRoot) return true;
        if(!root) return false;
        if(root->val == subRoot->val){
            isSub = rec(root, subRoot);
            if(isSub) return true;
        }
        return (isSubtree(root->left, subRoot) ||
                isSubtree(root->right, subRoot));
    }

    //checks if same tree
    bool rec(TreeNode* r, TreeNode* sr){
        if(!r && !sr) return true;
        if(!r || !sr) return false;

        return (rec(r->left, sr->left) &&
                rec(r->right, sr->right) && 
                r->val == sr->val);

    }
};