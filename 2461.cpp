class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        long long sum=0;
        long long maxi=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
            mp[nums[i]]++;
        }
        if(mp.size()==k){
            maxi=sum;
        }
        for(int i=k;i<n;i++){
            sum=sum-nums[i-k];
            mp[nums[i-k]]--;
            if(mp[nums[i-k]]==0){
                mp.erase(nums[i-k]);
            }
            sum=sum+nums[i];
            mp[nums[i]]++;
            if(mp.size()==k){
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};
