class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int>result;
        for(int num=lowLimit;num <=highLimit;num++){
            int sum=0;
            int x=num;
            while(x>0){
                int digit=x%10;
                sum=sum+digit;
                x=x/10;
            }
            result.push_back(sum);
        }
        unordered_map<int,int>mp;
        int ans=0;
        for(int x:result){
            mp[x]++;
            ans=max(ans,mp[x]);
        }
        return ans;
    }
};
