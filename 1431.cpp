class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxi=candies[0];
        for(int i=0;i<n;i++){
            maxi=max(maxi,candies[i]);
        }
        vector<bool> result;
        for(int i=0;i<n;i++){
            int newcandy=candies[i]+extraCandies;
            if(newcandy>=maxi){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;
    }
};
