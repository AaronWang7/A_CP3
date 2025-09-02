// AW Tic Tac Toe

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

string locations[3][3][3] {
    {"","",""},
    {"","",""},
    {"","",""}
};

int main() {
    int seconds = time(nullptr);
    srand(seconds);
    int my_num = rand() % 11;
    cout << "Welcome to Tic Tac Toe\n";
    cout "Where whould you like to place your X? (row then cloumn)\n";
    int row = 0;
    int cloumn = 0;
    cout << "Enter the row\n";
    cin >> row;
    cout << "Now cloumn\n";
    cin >> cloumn;
    if (locations[row][cloumn] == ""){
        locations [row][cloumn] == "X";
    }else{
        cout << "This spot is taken, try again\n"
        

    }



    }



    
    return 0;
}