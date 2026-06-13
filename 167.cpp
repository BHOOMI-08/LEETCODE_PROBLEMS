class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>result;
        int n=numbers.size();
        int left=0;
        int right=n-1;
        int sum=0;
        while(left<right){
            int sum=numbers[left]+numbers[right];
            if(sum==target){
                result.push_back(left+1);
                result.push_back(right+1);
            }else if(sum>target){
                right--;
            }else{
                left++;
            }
        }
        return result;
    }
};

