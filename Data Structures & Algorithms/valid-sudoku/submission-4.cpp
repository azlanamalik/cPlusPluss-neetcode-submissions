class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        for(const auto& row: board){
            unordered_set <char> checkPerRow{};
            for (const auto& rowVal :row){
                if (rowVal == '.') continue;
                if (checkPerRow.contains(rowVal)){
                    return false;
                }
                checkPerRow.insert(rowVal);
            }
        }
        for (int i = 0; i< 9 ; ++i){
            unordered_set <char> checkPerCol {};
            for (int j = 0; j<9 ; ++j){
                if (board[j][i] == '.') continue;
                if (checkPerCol.contains(board[j][i])){
                    return false;
                }
                checkPerCol.insert(board[j][i]);
            }
        }
        for (int i = 0; i< 9 ; i += 3){
            for (int j = 0; j < 9; j+= 3){
                unordered_set <char> checkPerTile{};
                for(int x = i; x < i+ 3 ; x++){
                    for (int y = j;y< j+ 3; y++){
                        if (board[x][y] == '.') continue;
                        if (checkPerTile.contains(board[x][y])){
                            return false;
                        }
                        checkPerTile.insert(board[x][y]);
                    }
                }
            }
        }
        return true;
    }
};