class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> mps , mpt;

        for(auto &i:s){
            mps[i]++;
        }
        for(auto &i:t){
            mpt[i]++;
        }
        return mps==mpt;
    }
};