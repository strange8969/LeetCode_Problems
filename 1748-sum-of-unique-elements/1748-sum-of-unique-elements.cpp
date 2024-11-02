class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> umap;
        int sum = 0;
        for(int i=0;i<n;i++){
            umap[nums[i]]++;
        }
        for(auto it:umap){
            if(it.second==1){
                sum = sum + it.first;
            }
        }
        return sum;
    }
};