class Solution {
public:
    int arrangeCoins(int n) {
        int start = 0;
        int end = n;
        while(start<=end){
            long long mid = start+(end-start)/2;
            if(mid*(mid+1)/2 <= n){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return start-1;
    }
};