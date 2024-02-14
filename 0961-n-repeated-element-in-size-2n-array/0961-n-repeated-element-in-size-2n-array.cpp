class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size() / 2;
        
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            if (mp[nums[i]] == n)
                return nums[i];
        }
        
        return -1; // Return an error value if no element is repeated n times.
    }
};