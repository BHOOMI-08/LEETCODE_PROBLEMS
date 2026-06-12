class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>words;
        string word;
        while(ss>>word){
            int left=0;
            int right=word.size()-1;
            while(left<right){
                swap(word[left],word[right]);
                left++;
                right--;
            }
            words.push_back(word);
        }
        string ans="";
        for(int i=0;i<words.size();i++){
            ans=ans+words[i];
            if(i!=words.size()-1){
                ans=ans+" ";
            }
        }
        return ans;        
    }
};
