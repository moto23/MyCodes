class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
       

        int i=0,j=0;

        while(i<a && j<b){
            if(nums1[i]==nums2[j])
            return nums1[i];

           else if(nums1[i]>nums2[j])
            j++;

            else if(nums1[i]<nums2[j])
            i++;
        }

        return -1;
    }
};