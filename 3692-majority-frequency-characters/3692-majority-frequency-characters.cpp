class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int> freq;
        for(auto &x:s){
            freq[x]++;
        }
        unordered_map<int,vector<char>> mp;
        for(auto &p:freq){
            mp[p.second].push_back(p.first);
        }
        int bestSize = -1, bestFreq = -1;
    vector<char> bestGroup;

    for (auto &g : mp) {
        int f = g.first;
        auto &chars = g.second;
        if ((int)chars.size() > bestSize || ((int)chars.size() == bestSize && f > bestFreq)) {
            bestSize = (int)chars.size();
            bestFreq = f;
            bestGroup = chars;
        }
    }

    sort(bestGroup.begin(), bestGroup.end()); 
    return bestGroup;
    }
};