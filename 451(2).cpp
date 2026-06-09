class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        vector<pair<char,int>>freq;
        for(auto it : mp){
            freq.push_back(it);
        }
        sort(freq.begin(),freq.end(),[](pair<char,int>&a,pair<char,int>&b){
            return a.second>b.second;
        });
        string ans="";
        for(auto it:freq){
            int count=it.second;
            while(count--){
                ans+=it.first;
            }
        }
        return ans;
    }
};
