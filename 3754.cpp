class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum=0;
        string str="";
        while(n>0){
            int digit=n%10;
            sum+=digit;
            if(digit!=0){
                str=to_string(digit)+str;
            }
            n/=10;
        }
        long long num=0;
        if(!str.empty()){
            num=stoll(str);
        }
        return num*sum;
    }
};
