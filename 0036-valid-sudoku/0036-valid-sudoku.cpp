class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> x;
        string r, c, b;
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if(board[i][j]!='.')
            {
                // Check rows
                r = "row" + to_string(i) + board[i][j];
                if (x.find(r) != x.end()) {
                    return false;
                } else {
                    x.insert(r);
                }

                // Check columns
                c = "col" + to_string(j) + board[i][j];
                if (x.find(c) != x.end()) {
                    return false;
                } else {
                    x.insert(c);
                }

                // Check 3x3 boxes
                b = "box" + to_string((i / 3) * 3 + (j / 3)) + board[i][j];
                if (x.find(b) != x.end()) {
                    return false;
                } else {
                    x.insert(b);
                }
            }
            }
        }
        return true;
    }
};