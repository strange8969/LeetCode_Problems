class Solution {
public:
    bool scoreBalance(string s) {
        int n = s.length();
        if(n<2) return false;
        int total = 0;
        for(char &x:s){
            total+=(x-'a'+1);
        }
        if(total%2==1) return false;
        int target = total/2;
        int pref=0;
        for(int i=0;i<=n-2;i++){
            pref += (s[i]-'a'+1);
            if(pref == target) return true;
        }
        return false;
    }
};