class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<3;i++){
            mp[s[i]]++;
        }
        if(mp.size()==3){
            count++;
        }
        for(int i=3;i<n;i++){
            mp[s[i-3]]--;
            if(mp[s[i-3]]==0){
                mp.erase(s[i-3]);
            }
            mp[s[i]]++;
            if(mp.size()==3){
                count++;
            }
        }
        return count;
    }
};
