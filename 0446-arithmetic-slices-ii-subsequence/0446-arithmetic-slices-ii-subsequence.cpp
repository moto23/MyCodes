class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int ans=0;
        int n=nums.size(); 
        unordered_map<long,int> mp[n];
      
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                long diff=(long)nums[i]-nums[j];

                int count=mp[j].find(diff)==mp[i].end() ? 0:mp[j][diff];
                
                mp[i][diff]+=count+1;

                ans+=count;
            }
        }
        
         return ans;
    }
};