class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxzero=0;
        int maxone=0;
        int countzero=0;
        int countone=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                countone++;
                countzero=0;
                maxone=max(countone,maxone);
            }else{
                countzero++;
                countone=0;
                maxzero=max(countzero,maxzero);
            }
        }
        return (maxone>maxzero)?true:false;
    }
};
