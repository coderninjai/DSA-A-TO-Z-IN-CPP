// This is the program for solving the sudoku

#include <iostream>

#include <vector>

using namespace std;
// It is the fuction to check that the input character is valid or not in that position
bool isValid(vector<vector<char>> &board, int row, int col, char c)
{
    for (int i = 0; i < 9; i++)
    {
        // it checks for the column
        if (board[i][col] == c)
            return false;

        // it is checking for that row position
        if (board[row][i] == c)
            return false;

        // it is checking for the 3x3 matrix
        /* let's say that the i=0 and row =5 and col=6
        then
        row =3*(5/3)+0/3 which equals to 3 (therefore independent of the postion of row it will provide the correct starting row position)

        col =3*(6/3)+0%3 which equals to 6 (therefore independent of the postion of c0l it will provide the correct starting col position)


        */
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
            return false;
    }

    // returns true if the all the if statements fail
    return true;
}

// This is the main rcursive function

bool solveSudoku(vector<vector<char>> &board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            // finds the empty position in the board
            if (board[i][j] == '.')
            {

                // checks every 1-9 values through character
                for (char c = '1'; c <= '9'; c++)
                {

                    // checks if the char value is valid or not
                    if (isValid(board, i, j, c))
                    {
                        board[i][j] = c;

                        // if the sudoku is solved returns true
                        if (solveSudoku(board))
                            return true;
                        else
                            board[i][j] = '.';
                    }
                }

                return false;
            }
        }
    }
    return true;
}
int main()
{
    vector<vector<char>> board{
        {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
        {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
        {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
        {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
        {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
        {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
        {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
        {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
        {'7', '.', '6', '1', '8', '5', '4', '.', '9'}};

    solveSudoku(board);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            cout << board[i][j] << " ";
        cout << "\n";
    }
    return 0;
}