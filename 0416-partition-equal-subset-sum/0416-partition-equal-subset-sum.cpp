class Solution {
public:
    bool solve(vector<int>& nums, int i, int x, vector<vector<int>>& dp) {
        if (x == 0) return true;
        if (i >= nums.size() || x < 0) return false;

        if (dp[i][x] != -1) return dp[i][x];

        bool take = solve(nums, i + 1, x - nums[i], dp);
        bool not_take = solve(nums, i + 1, x, dp);

        return dp[i][x] = take || not_take;
    }

    bool canPartition(vector<int>& nums) {
        int S = accumulate(nums.begin(), nums.end(), 0);

        if (S % 2 != 0) return false;

        int x = S / 2;

        vector<vector<int>> dp(nums.size(), vector<int>(x + 1, -1));

        return solve(nums, 0, x, dp);
    }
};