class Solution {
public:
    string clearDigits(string s) {
        stack <char> st;

        for(char &ch:s){
            if(isdigit(ch)){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(ch);
            }
        }
        string result = "";
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(begin(result), end(result));
        return result;
    }
};