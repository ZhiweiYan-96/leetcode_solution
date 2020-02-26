class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //row
        set<char> temp;
        for(int row=0; row<9; row++){
            temp = set<char>();
            for(int col=0; col<9; ++col){
                char ch = board[row][col];
                if(ch>='1' && ch<='9'){
                    if(temp.find(ch) == temp.end())
                        temp.insert(ch);
                    else
                        return false;
                }
            }
        }
        for(int col=0; col<9; col++){
            temp = set<char>();
            for(int row=0; row<9; ++row){
                char ch = board[row][col];
                if(ch>='1' && ch<='9'){
                    if(temp.find(ch) == temp.end())
                        temp.insert(ch);
                    else
                        return false;
                }
            }
        }
        //9*9
        for(int n_block_row =0 ; n_block_row<3; n_block_row++){
            for(int n_block_col=0; n_block_col<3; ++n_block_col){
                temp = set<char>();
                for(int init_row = n_block_row*3;  init_row<n_block_row*3+3; ++init_row){
                    for(int init_col=n_block_col*3;init_col<n_block_col*3+3; ++init_col){
                        char ch = board[init_row][init_col];
                        if(ch>='1' && ch<='9'){
                        if(temp.find(ch) == temp.end())
                            temp.insert(ch);
                        else
                            return false;
                      }
                    }
                }
            }
        }
        return true;


    }
};
