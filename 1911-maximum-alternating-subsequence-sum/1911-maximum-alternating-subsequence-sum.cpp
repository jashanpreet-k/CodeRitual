class Solution {
public:
    typedef long long ll;

    int n;
    vector<vector<ll>> dp;

    ll solve(vector<int>& nums, int i, bool flag) {
        if (i >= n)
            return 0;

        if (dp[i][flag] != -1)
            return dp[i][flag];

        // Skip current element
        ll skip = solve(nums, i + 1, flag);

        // Take current element
        ll val = nums[i];

        if (flag == false)
            val = -val;

        ll take = val + solve(nums, i + 1, !flag);

        return dp[i][flag] = max(skip, take);
    }

    long long maxAlternatingSum(vector<int>& nums) {
        n = nums.size();

        dp.assign(n, vector<ll>(2, -1));

        return solve(nums, 0, true);
    }
};