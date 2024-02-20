class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum = 0;
        int l = nums.size();
        for(int i=0;i<l;i++)
        {
            sum += nums[i];
        }
        int k = l*(l+1)/2;
         
        return k-sum;
        
    }
};