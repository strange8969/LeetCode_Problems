class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        int base =0;
        vector<int> result;
        while(n){
            int dig = n%10;
            if(dig!=0){
                result.push_back(dig*pow(10,base));
            }
            n/=10;
            base++;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};