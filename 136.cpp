class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>freq;
        for(auto it:mp){
            freq.push_back({it.first,it.second});
        }
        sort(freq.begin(),freq.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        return freq.back().first;
    }
};
