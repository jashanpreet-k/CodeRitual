class Solution {
public:
    const long long MOD = 1000000007;

    long long solve(long long x, long long n) {
        if (n == 0)
            return 1;

        x %= MOD;

        if (n % 2 == 0)
            return solve((x * x) % MOD, n / 2);

        return (x * solve((x * x) % MOD, (n - 1) / 2)) % MOD;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        return (solve(5, even) * solve(4, odd)) % MOD;
    }
};