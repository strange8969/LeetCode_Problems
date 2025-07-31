class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set <int> globalSet;
        unordered_set <int> prev;

        for(int num:arr){
            unordered_set <int> curr;
            curr.insert(num);
            for(int val:prev){
                curr.insert(val|num);
            }
            prev=curr;
            for(int num:curr){
                globalSet.insert(num);
        }
        }
        
        return globalSet.size();
    }
};