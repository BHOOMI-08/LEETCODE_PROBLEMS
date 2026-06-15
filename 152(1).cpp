class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxproduct=INT_MIN;
        for (int i=0;i<n;i++) {
            int currentproduct=1;
            for (int j=i;j<n;j++) {
                currentproduct=currentproduct*nums[j];
                maxproduct=max(maxproduct,currentproduct);
            }
        }
        return maxproduct;
    }
};
