class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        int ans = 0;
        for(auto iter: freq) {
            if(freq.find(iter.first - 1) != freq.end())
                ans = max(ans, iter.second + freq[iter.first - 1]);
        }
        return ans;
    }
};