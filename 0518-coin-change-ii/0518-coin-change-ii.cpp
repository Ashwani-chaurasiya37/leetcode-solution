// tabulation
class Solution{
public:
    int change(int amount, vector<int>& coins) {
        vector<unsigned int> dp(amount + 1, 0);
        dp[0] = 1;
        for (int coin : coins) {
            for (int i = coin; i <= amount; i++) {
                dp[i] += dp[i - coin];
            }
        }
        return dp[amount];
    }
};

//  Memoization
class Solution1{
public:
    int f(int i, int amount, vector<int>& coins, vector<vector<int>>& dp) {
        if (amount == 0)
            return 1;
        if (amount < 0 || i == coins.size())
            return 0;

        if (dp[i][amount] != -1)
            return dp[i][amount];
        // Take the current coin again
        int take = f(i, amount - coins[i], coins, dp);
        // Skip the current coin
        int skip = f(i + 1, amount, coins, dp);
        return dp[i][amount] = skip + take;
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
         return f(0, amount, coins, dp);
    }
};