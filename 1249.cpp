class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<int>index;
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }else{
                    index.push_back(i);
                }
            }
        }
        while(!st.empty()){
            index.push_back(st.top());
            st.pop();
        }
        sort(index.begin(),index.end());
        string ans="";
        int j=0;
        for(int i=0;i<n;i++){
            if(j<index.size() && i==index[j]){
                j++;
            }else{
                ans+=s[i];
            }
        }
        return ans;
    }
};
