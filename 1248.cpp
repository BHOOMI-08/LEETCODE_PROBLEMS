class Solution {
public:
    int atMost(vector<int>& nums,int k){
        if(k<0){
            return 0;
        }
        int n=nums.size();
        int left=0;
        int oddnum=0;
        int count=0;
        for(int right=0;right<n;right++){
            if(nums[right]%2 !=0){
                oddnum++;
            }
            while(oddnum>k){
                if(nums[left]%2!=0){
                    oddnum--;
                    left++;
                }else{
                    left++;
                }
            }
            count=count+(right-left+1);
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};
