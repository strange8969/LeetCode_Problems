class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        long long total = 0;
    for (const auto& q : queries) {
        long long l = q[0];
        long long r = q[1];
        long long sum_steps = 0;
        long long a = 1;
        int k = 1;
        while (a <= r) {
            long long b = a * 4 - 1;
            long long current_lower = max(l, a);
            long long current_upper = min(r, b);
            if (current_lower <= current_upper) {
                sum_steps += (current_upper - current_lower + 1) * k;
            }
            a *= 4;
            k++;
        }
        long long operations = (sum_steps + 1) / 2;
        total += operations;
    }
    return total;
    }
};