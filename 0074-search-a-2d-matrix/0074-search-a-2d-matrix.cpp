class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool present=false;
        vector<int>row(matrix.size(),0);
            vector<int>col(matrix[0].size(),0);
            for(int i=0;i<row.size();i++){
                for(int j=0;j<col.size();j++){
                    if(matrix[i][j]==target){
                       present= true;
                    }
            
                }
        
            }
        return present;
    }
};