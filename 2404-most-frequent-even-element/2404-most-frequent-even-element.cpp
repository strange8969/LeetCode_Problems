class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map <int,int> freq;
        int result = -1;
        int count = 0;
        for(auto &num:nums){
            if(num%2==0){
                freq[num]++;
            }
        }
        for(auto &it:freq){
            if(it.second>count){
                count = it.second;
                result = it.first;
            }else if(it.second==count && it.first<result){
                result = it.first;
            }
        }
        return result;
    }
};