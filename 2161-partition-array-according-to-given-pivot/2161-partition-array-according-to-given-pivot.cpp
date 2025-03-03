class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();

        vector <int> lessThanPivot;
        vector <int> equalsPivot;
        vector <int> greaterThanPivot;

        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                lessThanPivot.push_back(nums[i]);
            } else if(nums[i]==pivot){
                equalsPivot.push_back(nums[i]);
            }else{
                greaterThanPivot.push_back(nums[i]);
            }
        }
        for(int &num : equalsPivot){
            lessThanPivot.push_back(num);
        }
        for(int &num : greaterThanPivot){
            lessThanPivot.push_back(num);
        }
        return lessThanPivot;
    }
};