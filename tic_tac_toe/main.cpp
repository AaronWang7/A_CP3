#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


string board[3][3] = {
    {"", "", ""},
    {"", "", ""},
    {"", "", ""}
};


void printBoard() {
    cout << "\nCurrent Board:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << (board[i][j] == "" ? "." : board[i][j]) << " ";
        }
        cout << endl;
    }
}


bool isEmpty(int r, int c) {
    return board[r][c] == "";
}


bool checkWinner(string p) {
    for (int i = 0; i < 3; i++)
        if (board[i][0] == p && board[i][1] == p && board[i][2] == p) return true;
    for (int j = 0; j < 3; j++)
        if (board[0][j] == p && board[1][j] == p && board[2][j] == p) return true;
    if (board[0][0] == p && board[1][1] == p && board[2][2] == p) return true;
    if (board[0][2] == p && board[1][1] == p && board[2][0] == p) return true;

    return false;
}

bool isFull() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == "") return false;
    return true;
}

int main() {
    srand(time(0));
    cout << "Welcome to Tic Tac Toe!\n";
    cout << "You are X, Computer is O.\n";
    cout << "Enter row and column (0,1,2) to place your X.\n";

    while (true) {
        printBoard();

        int row, col;
        do {
            cout << "Enter row (0-2): ";
            cin >> row;
            cout << "Enter col (0-2): ";
            cin >> col;
        } while (row < 0 || row > 2 || col < 0 || col > 2 || !isEmpty(row, col));

        board[row][col] = "X"; 

        if (checkWinner("X")) {
            printBoard();
            cout << "You win!\n";
            break;
        }
        if (isFull()) {
            printBoard();
            cout << "It's a draw!\n";
            break;
        }

        int aiRow, aiCol;
        do {
            int num = rand() % 9;
            aiRow = num / 3;
            aiCol = num % 3;
        } while (!isEmpty(aiRow, aiCol));
        board[aiRow][aiCol] = "O";
        cout << "Computer placed O at (" << aiRow << "," << aiCol << ")\n";

        if (checkWinner("O")) {
            printBoard();
            cout << "Computer wins!\n";
            break;
        }
        if (isFull()) {
            printBoard();
            cout << "It's a draw!\n";
            break;
        }
    }

    return 0;
}
