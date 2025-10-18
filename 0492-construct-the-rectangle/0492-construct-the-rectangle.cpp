class Solution {
public:
    vector<int> constructRectangle(int area) {
        int sqroot = sqrt(area);
        for(int i=sqroot;i>0;i--){
            if(area%i==0){
                return {area/i,i};
            }
        }
        return {};
    }
};