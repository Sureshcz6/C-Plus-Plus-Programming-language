#include <iostream>
#include <vector>

using namespace std;

// Function to print the game board with lines
void printBoard(const vector<vector<char>>& board) {
    cout << "Current board:\n";
    cout << "  0   1   2\n"; // Column indices
    cout << " ------------\n"; // Top border
    for (int i = 0; i < 3; ++i) {
        cout << i << "|"; // Row index
        for (int j = 0; j < 3; ++j) {
            cout << " " << board[i][j] << " |"; // Print each cell with side borders
        }
        cout << endl;
        cout << " ------------\n"; // Row separator
    }
    cout << endl;
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

// Function to check if the board is full (draw condition)
bool isBoardFull(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false; // Found an empty cell
            }
        }
    }
    return true; // No empty cells found
}

// Main game function
void playGame() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // Initialize a 3x3 board with spaces
    char currentPlayer = 'X'; // Starting player
    int row, col;

    while (true) {
        printBoard(board); // Print the current state of the board
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col; // Get user input (0-2 for both)

        // Check for valid move
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move, try again.\n";
            continue; // Skip to the next iteration of the loop
        }

        board[row][col] = currentPlayer; // Place the player's mark on the board

        // Check for win or draw
        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!\n";
            break; // End the game
        }
        if (isBoardFull(board)) {
            printBoard(board);
            cout << "It's a draw!\n";
            break; // End the game
        }

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

int main() {
    playGame(); // Start the game
    return 0;
}
