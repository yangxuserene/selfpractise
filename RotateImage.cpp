class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        vector<vector<int> > tempMatrix;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        
        for(int j = 0; j<col; j++){
            vector<int> tempRow;
            for(int i = row-1; i>=0; i--){
                tempRow.push_back(matrix[i][j]);
            }
            tempMatrix.push_back(tempRow);
        }
        
        matrix = tempMatrix;
        return ;
    }
};
