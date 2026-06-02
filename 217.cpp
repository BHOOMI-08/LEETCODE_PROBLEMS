class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>countss;
        for(int i=0;i<n;i++){
            countss[nums[i]]++;
            if(countss[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};
