class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map <int,int> mp;
        while(n){
            int rem = n%10;
            mp[rem]++;
            n/=10;
        }
        int least = INT_MAX;
        int result = 9;
        for(auto it:mp){
            if(it.second < least){
                least = it.second;
                result = it.first;
            }else if(it.second == least){
                result = min(result,it.first);
            }
            
        }
        return result;
    }
};