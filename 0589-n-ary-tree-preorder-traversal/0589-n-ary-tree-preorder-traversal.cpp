class Solution {
public:
    vector<int> vp;
    vector<int> preorder(Node* root) {
        read(root);
        return vp;
    }
private:
    void read(Node* root){
        if(root==NULL) return;
        vp.push_back(root->val);
        int i=0,n=root->children.size();
        while(i<n){
            read(root->children[i++]);
        }
    }
};