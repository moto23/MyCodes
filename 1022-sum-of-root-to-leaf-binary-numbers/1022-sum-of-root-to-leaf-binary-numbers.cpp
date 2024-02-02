class Solution {
private:
    int bin_to_num(const std::string& bin)
    {
        int num = 0;
        const int bin_ind_max_size = bin.size() - 1;
        for (int i = 0; i < bin.size(); ++i)
        {
            if (bin[i] == '1')
                num += std::pow(2, bin_ind_max_size - i);
        }
        return num;
    }
    void traverse(TreeNode* node, std::string s, int& total_sum)
    {
        s.push_back(static_cast<char>(node->val + '0'));

        if (node->left == nullptr && node->right == nullptr)
            total_sum += bin_to_num(s);
        else
        {
            if (node->left != nullptr)
                traverse(node->left, s, total_sum);

            if (node->right != nullptr)
                traverse(node->right, s, total_sum);
        }
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        int total_sum = 0;
        traverse(root, "", total_sum);
        return total_sum;
    }
};

