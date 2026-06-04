class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        int count = 0;
        for(int index = 0; index < n; index++) {
            if(prefix[index] == k) {
                count++;
            }
            for(int i = 1; i <= index; i++) {
                if(prefix[index] - prefix[i - 1] == k) {
                    count++;
                }
            }
        }
        return count;
    }
};
