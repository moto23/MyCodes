class Solution {
private:
    void solve(TreeNode* root, vector<int> &v){
        if(root == NULL){
            return;
        }

        solve(root -> left, v);
        if(root -> left == NULL && root -> right == NULL) v.push_back(root -> val);
        solve(root -> right, v);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1;
        vector<int> leaf2;

        solve(root1, leaf1);
        solve(root2, leaf2);

        if(leaf1.size() != leaf2.size()) return false;
        for(int i=0; i<leaf1.size(); i++){
            if(leaf1[i] != leaf2[i]) return false;
        }
        return true;
    }
};