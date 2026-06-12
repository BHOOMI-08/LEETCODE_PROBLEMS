class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        string ans;
        for(string w:words){
            if(!ans.empty()){
                ans=ans+" ";
            }
            ans=ans+w;
        }
        return ans;
    }
};
