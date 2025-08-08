class Solution {
public:
    unordered_map<long long, double> memo;

    double dfs(int a, int b) {
        if (a <= 0 && b <= 0) return 0.5;
        if (a <= 0) return 1.0;
        if (b <= 0) return 0.0;
        long long key = ((long long)a << 32) | (unsigned long long)b;
        auto it = memo.find(key);
        if (it != memo.end()) return it->second;

        double res = 0.25 * (
            dfs(a - 4, b) +
            dfs(a - 3, b - 1) +
            dfs(a - 2, b - 2) +
            dfs(a - 1, b - 3)
        );
        memo[key] = res;
        return res;
    }

    double soupServings(int n) {
        if (n == 0) return 0.5; 

        int m = (n + 24) / 25;

        if (m >= 480) return 1.0;

        memo.clear();
        return dfs(m, m);
    }
};