class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int start = 0; start < n; start++) {
            int sum = 0;
            for(int end = start; end < n; end++) {
                sum += nums[end];
                if(sum % k == 0) {
                    count++;
                }
            }
        }
        return count;
    }
};
