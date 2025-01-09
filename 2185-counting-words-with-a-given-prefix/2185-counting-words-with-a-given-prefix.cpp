class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = words.size();
        int count = 0;

        for(int i=0;i<n;i++){
            int m = pref.length();
            if(words[i].substr(0,m) == pref){
                count++;
            }
        }
        return count;
    }
};