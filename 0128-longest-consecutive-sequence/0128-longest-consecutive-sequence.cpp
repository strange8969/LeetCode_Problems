class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;

        int longest = 1;
        unordered_set <int> ust;

        for(int i=0;i<n;i++){
            ust.insert(nums[i]);
        }

        for(auto it:ust){
            if(ust.find(it-1)==ust.end()){
                int cnt=1;
                int x = it;
                while(ust.find(x+1)!=ust.end()){
                    x=x+1;
                    cnt=cnt+1;
                }
                longest=max(longest,cnt);
            }
            
        }
        return longest;
    }
};