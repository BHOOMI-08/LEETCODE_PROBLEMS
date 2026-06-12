class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int uppercount=0;
        if(n==1){
            return true;
        }
        for(char c:word){
            if(isupper(c)){
                uppercount++;
            }
        }
        if(uppercount==n){
            return true;
        }
        if(uppercount==1 && isupper(word[0])){
            return true;
        }
        if(uppercount==0){
            return true;
        }
        return false;
    }
};
