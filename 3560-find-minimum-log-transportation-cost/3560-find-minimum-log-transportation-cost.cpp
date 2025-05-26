class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if(n<=k && m<=k) return 0;
        long long cost = 0;
        if(n>k){
            cost += 1LL*k*(n-k);
        }
        if(m>k){
            cost += 1LL*k*(m-k);
        }
        return cost;
    }
};