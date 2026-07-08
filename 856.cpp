class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int currentscore=0;
        for(char ch:s){
            if(ch=='('){
                st.push(currentscore);
                currentscore=0;
            }else{
                int prevscore=st.top();
                st.pop();
                if(currentscore==0){
                    currentscore=prevscore+1;
                }else{
                    currentscore=prevscore+2*currentscore;
                }
            }
        }
        return currentscore;
    }
};
