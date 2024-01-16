class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string ds;
        f(root, ans, ds);
        return ans;
    }

    void f(TreeNode *root, vector<string> &ans, string ds){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            ds += to_string(root->val);
            ans.push_back(ds);
            return;
        }
        ds += to_string(root->val) + "->";
        f(root->left, ans, ds);
        f(root->right, ans, ds);
    }
};