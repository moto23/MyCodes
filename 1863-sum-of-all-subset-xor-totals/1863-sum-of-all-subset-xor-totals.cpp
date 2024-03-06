class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<1<<nums.size();i++){
            int temp=0;
            for(int j = 0; j < nums.size(); j++) {
                if(i & (1 << j)) {
                    temp ^= nums[j];
                }
}
            ans+=temp;
        }
        return ans;
    }
};