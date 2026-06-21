class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(int num:nums){
            if(num%2==0){
                mp[num]++;
            }
        }
        if(mp.empty()){
            return -1;
        }
        int ans=-1;
        int maxfreq=0;
        for(auto it:mp){
            if(it.second>maxfreq){
                maxfreq=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};
