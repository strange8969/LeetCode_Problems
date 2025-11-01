class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        long long n = columnNumber;
        while(n > 0){
            int rem = (n-1)%26;
            ans.push_back(char('A'+ rem));
            n--;
            n/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};