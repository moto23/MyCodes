class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() == 1 && nums2.size() == 1)
        {
            if(nums1[0] == nums2[0]) return {nums1[0]};
            else return {};
        }
        unordered_map <int,int> m;
        for(auto i: nums1) m[i]++;
        
        vector <int> ans;
        for(auto i: nums2)
        {
            if(m.find(i) != m.end())
            {
                ans.push_back(i);
                m[i]--;
                if(m[i] == 0) m.erase(i);
            }
        }
        return ans;
    }
};