class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        int maxperi=0;
        sort(nums.begin(),nums.end(),greater<int>());
        
       for(int i=0;i<n-2;i++){
           int j=i+1;
           int k=j+1;
           if(((nums[i]+nums[j])>nums[k]) && ((nums[k]+nums[j])>nums[i]) && ((nums[i]+nums[k])>nums[j])){
                      return nums[i]+nums[j]+nums[k];
       }} 
       return maxperi;}
    
};