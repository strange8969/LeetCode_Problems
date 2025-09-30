class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end());

        vector<int> dist(st.begin(),st.end());
        sort(dist.rbegin(),dist.rend());
        
        if(dist.size()>=3){
            return dist[2];
        }else{
            return dist[0];
        }
    }
};