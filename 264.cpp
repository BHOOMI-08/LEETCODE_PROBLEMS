class Solution {
public:
    bool isUgly(int n){
        if(n<=0){
            return false;
        }
        while(n%2==0){
            n=n/2;
        }
        while(n%3==0){
            n=n/3;
        }
        while(n%5==0){
            n=n/5;
        }
        return n==1;
    }
    int nthUglyNumber(int n) {
        int count=0;
        int num=1;
        while(true){
            if(isUgly(num)){
                count++;
            }
            if(count==n){
                return num;
            }
            num++;
        } 
    }
};   bruteforce TLE error
