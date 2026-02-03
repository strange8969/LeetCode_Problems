class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto c:s){
            if(isalnum(c)){
                str += tolower(c);
            }
        }
        int n = str.length();
        int i = 0;
        int j = n-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};