class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int x:nums){
            sum += x;
        }
        long long avg = sum / n;
        avg++;
        unordered_set<int> st(nums.begin(),nums.end());
        if(avg <= 0) avg=1;
        while(true){
            if(st.count(avg) == 0) return avg;
                avg++;
        }
        return -1;
    }
};