class Solution {
public:
    bool solve(vector<vector<char>>& board, string word, int i, int j, int ind)
    {
        if(ind == word.size()) return true;

        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[ind]) return false;

        char temp = board[i][j];
        board[i][j] = ' '; // mark as visited

        bool found = solve(board, word, i+1, j, ind+1) || solve(board, word, i, j+1, ind+1) ||
                     solve(board, word, i-1, j, ind+1) || solve(board, word, i, j-1, ind+1);

        board[i][j] = temp; // unmark
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) 
    {
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(solve(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};
