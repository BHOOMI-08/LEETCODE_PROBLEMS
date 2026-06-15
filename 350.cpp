class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int x: nums1){
            mp1[x]++;
        }
        for(int x: nums2){
            mp2[x]++;
        }
        vector<int>ans;
        for(auto it:mp1){
            int element=it.first;
            int freq1=it.second;
            if (mp2.find(element)!=mp2.end()){
                int freq2=mp2[element];
                int commonfreq=min(freq1,freq2);
                while(commonfreq>0){
                    ans.push_back(element);
                    commonfreq--;
                }
            }
        }
        return ans;
    }
};
