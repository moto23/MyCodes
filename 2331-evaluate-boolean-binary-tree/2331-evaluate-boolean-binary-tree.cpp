class Solution {
    bool evaluate(TreeNode* root){
        switch(root -> val){
            case 0: return false;
            case 1: return true;
            case 2: return evaluate(root -> left) || evaluate(root -> right);
            case 3: return evaluate(root -> left) && evaluate(root -> right);
            default: return false; // handle other cases
        }
    }
public:
    bool evaluateTree(TreeNode* root) {
        return evaluate(root);
    }
};
