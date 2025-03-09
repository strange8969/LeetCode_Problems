class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
    
        for (int i = 0; i < k - 1; i++) {
            colors.push_back(colors[i]);
        }
        
        int result = 0;
        for (int i = 0; i < n; i++) {
            bool isAlternating = true;
            for (int j = i; j < i + k - 1; j++) {
                if (colors[j] == colors[j + 1]) {
                    isAlternating = false;
                    break;
                }
            }
            if (isAlternating) {
                result++;
            }
        }
        
        return result;
    }
};