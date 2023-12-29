class Solution {
public:
    int minDifficulty(vector<int>& jD, int d) {
        int n = jD.size();
        if (n < d) return -1;

        vector<vector<int>> dp(d + 1, vector<int>(n + 1, INT_MAX));
        dp[0][0] = 0;

        for (int i = 1; i <= d; i++) {
            for (int j = 1; j <= n; j++) {
                int curmx = 0;
                for (int k = j; k >= i; k--) {
                    curmx = max(curmx, jD[k - 1]);
                    if (dp[i - 1][k - 1] != INT_MAX) {
                        dp[i][j] = min(dp[i][j], dp[i - 1][k - 1] + curmx);
                    }
                }
            }
        }

        return (dp[d][n] == INT_MAX) ? -1 : dp[d][n];
    }
};