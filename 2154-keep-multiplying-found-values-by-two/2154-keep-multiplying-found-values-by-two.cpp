class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int val=original;
        int n = nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]==val){
                original = original*2;
                val = original;
                i=0;
            }
        }
        return original;
    }
};