class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row(matrix.size()),col(matrix[0].size());
        bool first_row(false),first_col(false);
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++){
                if(matrix[i][j]==0){
                    // printf("(%d,%d);",i,j);
                    if(i==0)
                        first_row=true;
                    if(j==0)
                        first_col =true;
                    matrix[0][j]=0;
                    matrix[i][0] =0;
                }
            }
        // cout<<"over";
        for(int i=1; i<row;i++){
            for(int j=1; j<col;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    // printf("(%d,%d);",i,j);
                    matrix[i][j]=0;
                }
            }
        }
        if(first_row){
            for(int j=0;j<col;j++)
                matrix[0][j] = 0;
        }
        if(first_col){
            for(int i=0; i<row;i++)
                matrix[i][0]  = 0;
        }
    }
};
