class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0;
        int count=0;
        for(int i=0;i<k;i++){
            sum=sum+arr[i];
        }
        if(sum/(double)k >=threshold){
            count++;
        }
        for(int i=k;i<n;i++){
            sum=sum-arr[i-k]+arr[i];
            if(sum/(double)k>=threshold){
                count++;
            }
        }
        return count;
    }
};
