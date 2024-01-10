class Solution {
public:
    // Function to find the maximum depth of a binary tree rooted at 'root'
    int findMax(TreeNode* root) {
        // If the node is null, return -1
        // Otherwise, return the maximum depth of the left and right subtrees
        return (!root) ? -1 : std::max(findMax(root->left) + 1, findMax(root->right) + 1);
    }

    // Global variables to store the result and count
    int res = 0, count = 0;

    // Depth-first search function
    int dfs(TreeNode* root, int start) {
        // If the node is null, return -1
        if (!root) return -1;

        // If the value of the current node is equal to 'start'
        if (root->val == start) {
            // Update the result with the maximum depth starting from this node
            res = std::max(res, findMax(root));
            return 1;
        }

        // Recursive calls for left and right subtrees
        int a = dfs(root->left, start);
        int b = dfs(root->right, start);

        // If 'start' is found in either left or right subtree, increment count
        if (a != -1 || b != -1)
            count++;
        else
            return -1;

        // Update result considering both left and right subtrees
        if (a != -1) res = std::max(res, findMax(root->right) + 1 + count);
        if (b != -1) res = std::max(res, findMax(root->left) + 1 + count);

        // Return 1 to indicate 'start' is found in the subtree
        return 1;
    }

    // Function to calculate the amount of time it takes to reach the maximum depth from 'start'
    int amountOfTime(TreeNode* root, int start) {
        // Call DFS and return the result
        int a = dfs(root, start);
        return res;
    }
};
