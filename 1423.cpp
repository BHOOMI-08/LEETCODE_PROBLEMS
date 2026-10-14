lass Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int window=n-k;
        int Sum=0;
        int sum=0;
        for(int i=0;i<n;i++){
            Sum=Sum+cardPoints[i];
        }
        for(int i=0;i<window;i++){
            sum=sum+cardPoints[i];
        }
        int minSum=sum;
        for(int i=window;i<n;i++){
            sum=sum-cardPoints[i-window]+cardPoints[i];
            minSum=min(sum,minSum);
        }
        return Sum-minSum;
    }
};
