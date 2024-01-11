class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        if (root == NULL)
            return 0;
        
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {root->val, root->val}});
        int res = 0;

        while (!q.empty())
        {
            auto curr = q.front();
            q.pop();

            int value = curr.first->val;
            int vLow = curr.second.first;
            int vMax = curr.second.second;

            res = max(res, max(value - vLow, vMax - value));

            int newLow = min(value, vLow);
            int newMax = max(value, vMax);
            
            if (curr.first->left)
            {
                q.push({curr.first->left, {newLow, newMax}});
            }
            if (curr.first->right)
            {
                q.push({curr.first->right, {newLow, newMax}});
            }
        }

        return res;
    }
};