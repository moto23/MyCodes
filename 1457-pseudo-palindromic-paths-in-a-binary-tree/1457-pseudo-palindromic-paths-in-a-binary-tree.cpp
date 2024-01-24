class Solution {
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>v(10, 0);
        int ans = 0;
        dfs(root, v, ans);

        return ans;
    }

    void dfs(TreeNode* root, vector<int>& v, int& ans){
        if(!root) return;

        v[root->val]++;

        if(!root->left && !root->right){
            int odd = 0;
            for(int i = 1; i < 10; i++){
                if(v[i] % 2 == 1) odd++;
            }
            v[root->val]--;
            if(odd <= 1) ans += 1;
            return;
        }

        dfs(root->left, v, ans);
        dfs(root->right, v, ans);

        v[root->val]--;
    }
};