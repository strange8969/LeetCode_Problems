class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int total = 0, highest =0;
        for(int x:gain){
            total += x;
            if(total > highest){
            highest = total;
        }
        }
        return highest;
    }
};