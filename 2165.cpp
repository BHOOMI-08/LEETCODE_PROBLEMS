class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0){
            return 0;
        }
        bool negative=(num<0);
        num=abs(num);
        vector<int>digits;
        while(num>0){
            digits.push_back(num%10);
            num/=10;
        }
        if(negative){
            sort(digits.begin(),digits.end(),greater<int>());
        }else{
            sort(digits.begin(),digits.end());
        }
        if(digits[0]==0){
            for(int i=1;i<digits.size();i++){
                if(digits[i]!=0){
                    swap(digits[0],digits[i]);
                    break;
                }
            }
        }
        long long ans=0;
        for(int d:digits){
            ans=ans*10+d;
        }
        if(negative){
            ans=-ans;
        }
        return ans;
    }
};
