class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums) mp[i] += 1;
        int ans = 0;
        for(auto it:mp){
            if(it.second == 1)  return -1; //edge case
            ans += (it.second/3) + (it.second%3!=0);
        }
        return ans;
    }
};