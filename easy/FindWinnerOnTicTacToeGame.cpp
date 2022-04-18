// runtime: 0ms, faster than 100% of C++ online submissions for Find Winner on a Tic Tac Toe Game
// memory usage: 8.4MB, less than 20.36% of C++ online submissions for Find Winner on a Tic Tac Toe Game

class Solution {
public:
    string winner(char cell) {
        if (cell == 'X') return "A";
        else if (cell == 'O') return "B";
        return "Pending";
    }
    
    string checkGrid(int moves, char G[][3]) {
        for (int c = 0; c < 3; c++)
            if (G[0][c] == G[1][c] && G[1][c] == G[2][c])
                return winner(G[0][c]);
        
        for (int r = 0; r < 3; r++)
            if (G[r][0] == G[r][1] && G[r][1] == G[r][2])
                return winner(G[r][0]);
        
        if (G[0][0] == G[1][1] && G[1][1] == G[2][2])
            return winner(G[0][0]);
        
        if (G[0][2] == G[1][1] && G[1][1] == G[2][0])
            return winner(G[0][2]);
                
        return moves < 9 ? "Pending" : "Draw";
    }
    
    string tictactoe(vector<vector<int>>& moves) {
        int i = 0;
        char grid[3][3];
        
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                grid[j][k] = ' ';
        
        for (auto move: moves) {
            int r = move[0];
            int c = move[1];
            
            if (i % 2 == 0) grid[r][c] = 'X';
            else grid[r][c] = 'O';
            
            i++;
        }
        
        return checkGrid(i, grid);
    }
};
