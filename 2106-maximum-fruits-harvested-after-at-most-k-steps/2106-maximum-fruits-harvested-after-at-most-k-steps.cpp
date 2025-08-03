class Solution {
public:
    int cost(int L, int R, int startPos) {
    return min(
        abs(startPos - L) + (R - L),
        abs(R - startPos) + (R - L)
    );
}
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();
        int left=0;
        int right=0;
        long long currentSum = 0;
        long long maxFruits = 0;

        while(right<n){
            currentSum += fruits[right][1];

            while(left<=right && cost(fruits[left][0],fruits[right][0],startPos) >k){
                currentSum -= fruits[left][1];
                left++;
            }
            maxFruits = max(currentSum, maxFruits);
            right++;
        }
        return (int)maxFruits;
    }
};