class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(); // Fix: Correctly calculate the size of the array

        for (int i = 0; i < n; ++i) {
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                // Check conditions for valid index and if the elements are not in their correct positions
                swap(nums[nums[i] - 1], nums[i]);
            }
        }

        for (int i = 0; i < n; ++i) {
            if (i + 1 != nums[i]) {
                return i + 1;
            }
        }

        return n + 1;
    }
};
