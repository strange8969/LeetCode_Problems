class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map <int,int> freq;
        for(auto &num:arr){
            freq[num]++;
        }
        int largest = -1;
        for(auto &it:freq){
            if(it.first == it.second){
                if(it.first>largest){
                largest = it.first;
                }
            }
        }
        return largest;
    }
};