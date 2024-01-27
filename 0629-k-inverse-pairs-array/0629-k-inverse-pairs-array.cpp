class Solution {
public:
    const int mod=1e9+7;
    int solve(int index, int n, int k, vector<vector<int>>&dp){
        if(index==n)return k==0 ? 1:0;
        if(k<0)return 0;
        if(dp[index][k]!=-1)return dp[index][k];
        int count=0;
        for(int i=0;i<=min(index,k);i++){
            count=(count+solve(index+1,n,k-i,dp))%mod;
        }
        return dp[index][k]=count;
    }
    int kInversePairs(int n, int k) {
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return solve(0,n,k,dp);
    }
};