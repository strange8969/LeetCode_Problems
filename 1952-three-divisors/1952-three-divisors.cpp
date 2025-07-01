class Solution {
public:
    bool isThree(int n) {
        vector <int> result;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                result.push_back(i);
            }
        }
        if(result.size()==3){
            return true;
        }else{
            return false;
        }
    }
};