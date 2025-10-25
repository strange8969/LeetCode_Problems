class Solution {
public:
    int totalMoney(int n) {
        int days = n%7;
        int weeks = n/7;
        int sum = 0;
        
        for(int i=1;i<=weeks;i++){
            sum += 7*(i+3);
        }
        
        for(int j=1;j<=days;j++){
            sum += weeks+j;
        }
        return sum;
    }
};