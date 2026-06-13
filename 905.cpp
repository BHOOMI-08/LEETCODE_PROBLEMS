class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>evenvalue;
        vector<int>oddvalue;
        vector<int>result;
        for(int num: nums){
            if(num%2==0){
                evenvalue.push_back(num);
            }else{
                oddvalue.push_back(num);
            }
        }
        for(int num: evenvalue){
            result.push_back(num);
        }
        for(int num: oddvalue){
            result.push_back(num);
        }
        return result;       
    }
};
