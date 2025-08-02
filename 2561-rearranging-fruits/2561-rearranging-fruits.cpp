class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map <int,int> freq1;
        long long result = 0;
        int minEle = INT_MAX;
        for(int num:basket1){
            freq1[num]++;
            minEle = min(minEle,num);
        }
        for(int num:basket2){
            freq1[num]--;
            minEle = min(minEle,num);
        }
        vector <int> finalList;
        for(auto &it:freq1){
            int cost = it.first;
            int count = it.second;

            if(count ==0){
                continue;
            }
            if(count%2!=0){
                return -1;
            }
            for(int c=1;c<=abs(count)/2;c++){
                finalList.push_back(cost);
            }
        }
        sort(finalList.begin(),finalList.end());
        for(int i=0;i<finalList.size()/2;i++){
            result += min(finalList[i],minEle*2);
        }
    return result;
    }
};