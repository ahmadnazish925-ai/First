#include <iostream>

using namespace std;

char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
char current_marker;
int current_player;

// Function to display the Tic-Tac-Toe board
void displayBoard() {
    cout << "\n";
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
    cout << "\n";
}

// Function to check if a player has won
bool checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) || 
            (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) || 
        (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
        return true;
    }

    return false;
}

// Function to check if the board is full (draw)
bool isDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false; // There is an empty cell
            }
        }
    }
    return true;
}

// Function to place a marker on the board
bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = current_marker;
        return true;
    } else {
        return false; // Spot already taken
    }
}

// Function to switch players
void switchPlayer() {
    current_marker = (current_marker == 'X') ? 'O' : 'X';
    current_player = (current_player == 1) ? 2 : 1;
}

int main() {
    cout << "Welcome to Tic-Tac-Toe!\n";
    cout << "Player 1: X  |  Player 2: O\n\n";
    
    current_marker = 'X';
    current_player = 1;

    int slot;
    displayBoard();

    while (true) {
        cout << "Player " << current_player << " (" << current_marker << "), enter your move (1-9): ";
        cin >> slot;

        if (slot < 1 || slot > 9) {
            cout << "Invalid input! Please choose a number between 1 and 9.\n";
            continue;
        }

        if (!placeMarker(slot)) {
            cout << "This slot is already taken! Choose another slot.\n";
            continue;
        }

        displayBoard();

        if (checkWin()) {
            cout << "Congratulations! Player " << current_player << " (" << current_marker << ") wins!\n";
            break;
        }

        if (isDraw()) {
            cout << "It's a draw! No more moves left.\n";
            break;
        }

        switchPlayer();
    }

    return 0;
}
