class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>result;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int val=matrix[i][j];
                bool isMinRow=true;
                bool isMaxCol=true;
                for(int k=0;k<n;k++){
                    if(matrix[i][k]<val){
                        isMinRow=false;
                        break;
                    }
                }
                for(int k=0;k<m;k++){
                    if(matrix[k][j]>val){
                        isMaxCol=false;
                        break;
                    }
                }
                if(isMinRow && isMaxCol){
                    result.push_back(val);
                }
            }
        }
        return result;
    }
};
