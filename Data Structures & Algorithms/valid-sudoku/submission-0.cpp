class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>rows(9),cols(9),boxes(9);
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                char x = board[r][c];
                if(x=='.'){continue;}
                int b= (r/3)*3 + (c/3);  
                if(rows[r].count(x) || cols[c].count(x) || boxes[b].count(x)){
                    return false;
                }else{
                    rows[r].insert(x);
                    cols[c].insert(x);
                    boxes[b].insert(x);
                }
            }
        }
        return true;
    }
};
