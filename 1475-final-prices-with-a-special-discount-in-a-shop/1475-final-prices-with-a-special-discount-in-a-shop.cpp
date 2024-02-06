class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
         
         
         for(int i=0;i<nums.size();i++) 
         { 
             for(int j=i+1;j<nums.size();j++) 
             { 
                 if(nums[j]<=nums[i]) 
                 { 
                     nums[i]=nums[i]-nums[j];
                     break;
                 }
             }
         }

         return nums;
    }
};