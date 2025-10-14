class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> result;
        for(int x:order){
            for(int y:friends){
                if(x==y){
                    result.push_back(x);
                }
            }
        }
        return result;
    }
};