lass Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0){
            return false;
        }
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        sort(nums.begin(),nums.end());
        for(int x:nums){
            if(freq[x]==0){
                continue;
            }
            for(int i=0;i<k;i++){
                if(freq[x+i]==0){
                    return false;
                }
                freq[x+i]--;
            }
        }
        return true;
    }
};
