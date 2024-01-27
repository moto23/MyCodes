class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto num:nums)
        {
            pq.push(num);
        }
        while(k>0 && !pq.empty())
        {
            int cur=pq.top();
            pq.pop();
            if(cur==0)
              break;
            pq.push(cur*-1);
            k--;
        }
        int sum=0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};