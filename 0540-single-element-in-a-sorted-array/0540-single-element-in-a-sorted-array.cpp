class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low=0;
        int high=n-1;
        
        while(low<high){
            int mid = low+(high-low)/2;
            if(nums[mid]==nums[mid+1]){
                if((high-mid)%2==0){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }else if(nums[mid]!=nums[mid+1]){
                if((high-mid)%2==0){
                    high=mid;
                }else{
                    low=mid+1;
                }
            }
        }
        return nums[low];
    }
};