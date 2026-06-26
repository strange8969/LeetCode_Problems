class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0;
        unordered_set<int> st(nums.begin(),nums.end());
        for(int num:st){
            if(st.find(num-1)==st.end()){
                int count = 1;
                while(st.count(num+count)){
                    count++;
                }
                maxCount = max(count,maxCount);
            }
        }
        return maxCount;
    }
};