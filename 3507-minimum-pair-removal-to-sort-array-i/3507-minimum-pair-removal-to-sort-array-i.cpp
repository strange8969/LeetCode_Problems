class Solution {
public:
    bool isNonDecreasing(vector <int> &nums){
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]) return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;
        while (!isNonDecreasing(nums)) {
        int minSum = INT_MAX;
        int index = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            int sum = nums[i] + nums[i + 1];
            if (sum < minSum) {
                minSum = sum;
                index = i;
            }
        }

        int merged = nums[index] + nums[index + 1];
        nums.erase(nums.begin() + index);
        nums[index] = merged;

        count++;
    }
        return count;
    }
};