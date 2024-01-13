class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size(),-1);
        unordered_map<int,int>map;
        for(int i = 0; i < nums2.size(); i++){
            map[nums2[i]] = i;
        }
       for(int i = 0; i < nums1.size(); i++){
           int ind = map[nums1[i]];
           for(int j = ind+1; j < nums2.size(); j++){
               if(nums2[ind] < nums2[j]){
                   ans[i] = nums2[j];
                   break; 
               }
           }
       }

       return ans;
    }
};