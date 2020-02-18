class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res;
        for(int i=0; i<n; ++i){
            res.push_back( vector<int>(n) );
        }
        bool left,right,up,down;
        right=true;
        left=up=down=false;
        int cur_n = n;
        int cur_row,cur_col;
        cur_row=cur_col=0;
        int i=0;
        while(i<n*n){
            for(int j=0;j<cur_n; ++j){
                i++;
                // cout<<"("<<cur_row<<","<<cur_col<<") ";
                res[cur_row][cur_col] = i;
                if(j==(cur_n-1))
                    break;
                if(right)
                    ++cur_col;
                if(left)
                    --cur_col;
                if(up)
                    --cur_row;
                if(down)
                    ++cur_row;
            }
            if(right) { down=true; left=up=right=false; cur_n--; cur_row++;}
            else if(left)  { up=true; left=down=right=false; cur_n--; cur_row--;}
            else if(up)    { right=true; left=down=up=false; cur_col++; }
            else if(down)  { left=true; down=right=up=false; cur_col--;}
        }

        return res;
    }
};
