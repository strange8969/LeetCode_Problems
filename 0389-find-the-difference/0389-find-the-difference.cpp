class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map <char,int> freq;
        

        for(auto &ch:s){
            freq[ch]++;
        }
        for(auto &ch:t){
            freq[ch]--;
            if(freq[ch]<0){
                return ch;
            }
        }
        return ' ';
    }
};