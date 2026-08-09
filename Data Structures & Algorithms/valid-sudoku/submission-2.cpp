class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){

                if(board[i][j] != '.'){
                    if(rows[i].find(board[i][j]) != rows[i].end()){
                        return false;
                    }
                    rows[i].insert(board[i][j]);

                    if(cols[j].find(board[i][j]) != cols[j].end()){
                        return false;
                    }
                    cols[j].insert(board[i][j]);

                    int boxNo=(i/3)*3+(j/3);
                    if(boxes[boxNo].find(board[i][j]) != boxes[boxNo].end()){
                        return false;
                    }
                    boxes[boxNo].insert(board[i][j]);


                }

            }


        }
        return true;
    }
};
