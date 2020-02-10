class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        //Compute skyline
        vector<int> row_sky;
        vector<int> col_sky;
        int res=0;
        int row = grid.size();
        int col = grid[0].size();
        for(int i=0; i<row; ++i){
            int max=grid[i][0];
            for(int j=0; j<col; ++j){
                if(grid[i][j] > max)
                    max = grid[i][j];
            }
            row_sky.push_back(max);
        }
        for(int j=0; j<col; ++j){
            int max=grid[0][j];
            for(int i=0; i<row; ++i){
                if(grid[i][j] > max)
                    max = grid[i][j];
            }
            col_sky.push_back(max);
        }
        for(int i=0; i<row; ++i){
            for(int j=0; j<col; ++j){
                if(grid[i][j]<row_sky[i] && grid[i][j]<col_sky[j]){
                    int increment = (row_sky[i]<col_sky[j]) ? (row_sky[i]-grid[i][j]) : (col_sky[j]-grid[i][j]);
                    res += increment;
                }
            }
        }
        return res;
    }
};
