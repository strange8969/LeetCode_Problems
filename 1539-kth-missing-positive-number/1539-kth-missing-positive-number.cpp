class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n = nums.size();
        int num = 1;
        int i = 0;

        while(i<n && k>0){
            if(nums[i]==num){
                i++;
            }else{
                k--;
            }
            num++;
        }
        while(k--){
            num++;
        }
        return num-1;
    }
};