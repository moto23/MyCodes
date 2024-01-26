class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            double sum = 0;
            int counter = n ;
            while(counter--){
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;
                if(temp -> left) q.push(temp-> left);
                if(temp->right) q.push(temp->right);
            }
                            result.push_back(sum/n);

        }

        return result;
    }
};