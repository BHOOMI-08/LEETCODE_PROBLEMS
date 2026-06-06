class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>countss;
        int n=nums.size();
        for(int i=0;i<n;i++){
            countss[nums[i]]++;
            if(countss[nums[i]]>n/2){
                return nums[i];
            }
        }
        return -1;
    }
};
