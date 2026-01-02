class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size = nums.size();
        int n = size/2;

        unordered_map <int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        int result;
        for(auto it:freq){
            if(it.second == n){
                result = it.first;
            }
        }
        return result;
    }
};