class Solution {
public:
    int tallestBillboard(vector<int>& rods) {
        int n = rods.size();
        int sum = 0;
        for (int rod : rods) {
            sum += rod;
        }

        // Initialize a 2D dp array with dimensions (n+1) x (sum+1)
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
        dp[0][0] = 0;

        for (int i = 1; i <= n; i++) {
            int rod = rods[i - 1];
            for (int j = 0; j <= sum; j++) {
                // Copy the previous state to the current state
                if (dp[i - 1][j] >= 0) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j]);
                    dp[i][j + rod] = max(dp[i][j + rod], dp[i - 1][j] + rod);
                    dp[i][abs(j - rod)] = max(dp[i][abs(j - rod)], dp[i - 1][j] + rod);
                }
            }
        }

        // Return the maximum height of the billboard stored at dp[n][0]
        return dp[n][0]/2;
    }
};
