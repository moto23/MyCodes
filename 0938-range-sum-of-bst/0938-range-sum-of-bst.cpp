class Solution {
public:
void inorder(TreeNode*root , vector<int>&arr){
    //base case ;
    if(root == NULL){
        return;
    }
    inorder(root->left , arr);
    arr.push_back(root->val);
    inorder(root->right , arr);

}
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>arr;
        inorder(root ,arr);
        sort(arr.begin() , arr.end());
     int n = arr.size();
     int ans = 0 ;
     for(int i = 0  ;i<n;i++){
         if(arr[i]>=low && arr[i]<=high){
             ans =  ans+arr[i];

         }
     }
     return ans ;
        
    }
};