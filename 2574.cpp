class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]+nums[i];
        }
        vector<int> result;
        for(int i=0;i<n;i++){
            int left=prefix[i]-nums[i];
            int right=suffix[i]-nums[i];
            result.push_back(abs(left-right));
        }
        return result;       
    }
};
