class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> dp(n,0);

        int mn = prices[0];

        for(int i=1;i<n;i++){
            mn = min(mn , prices[i]);
            dp[i] = max(dp[i-1], prices[i] - mn);
        }


       return dp[n-1];
    }
};