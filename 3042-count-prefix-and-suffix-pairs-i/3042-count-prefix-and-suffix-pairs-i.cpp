class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                string str1 = words[i];
                string str2 = words[j];
                int a = str1.length();
                int b = str2.length();
                if (b >= a) {
                    if ((str2.substr(0, a) == str1) &&
                        (str2.substr(b - a, a) == str1)) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};