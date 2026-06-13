class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                result.push_back(nums[i]);
            }
        }
        for(int i=0;i<result.size();i++){
            nums[i]=result[i];
        }
        return result.size();
    }
};
