class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        for(char c:s){
            if(isalnum(c)){
            newStr += tolower(c);
            }
        }
        int n = newStr.size();
        for(int i=0;i<n/2;i++){
            if(newStr[i]!=newStr[n-i-1]){
                return false;
            }
        }
        return true;
    }
};