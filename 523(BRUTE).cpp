class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=sum+nums[j];
                int length=j-i+1;
                if(length>=2 && sum%k==0){
                    return true;
                }
            }
        }
        return false;
    }
};
