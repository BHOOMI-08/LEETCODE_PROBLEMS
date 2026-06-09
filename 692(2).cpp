class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(string s:words){
            mp[s]++;
        }
        vector<pair<string,int>>freq;
        for(auto it:mp){
            freq.push_back(it);
        }
        sort(freq.begin(),freq.end(),[](pair<string,int>&a,pair<string,int>&b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second>b.second;
        });
        vector<string> result;
        for(int i=0;i<k;i++){
            result.push_back(freq[i].first);
        }
        return result;
    }
};
