class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        if(strs.size()==1) return strs[0];

        int minLen = strs[0].size();
        for(auto &s:strs){
            minLen = min(minLen, (int)s.size());
        }
        string result = "";
        for(int i=0;i<minLen;i++){
            char ch = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=ch){
                    return result;
                }
            }
            result += ch;
        }
        return result;
    }
};