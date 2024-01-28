class Solution {
public:
    void postOrderTraversal(Node* node, std::vector<int>& data)
    {
        if( nullptr != node )
        {
            for( const auto& n : node->children )
                postOrderTraversal( n, data);
            data.push_back(node->val);
        }
    }

    vector<int> postorder(Node* root)
    {
        std::vector<int> data;
        postOrderTraversal(root, data);
        return data;
    }
};