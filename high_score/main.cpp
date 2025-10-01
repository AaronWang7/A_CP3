// Aw, High Score
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;


enum Action{
    Add = 1, 
    Display  = 2,
    Exit = 3,
};


int main(){

    cout << "Enter your choice(1-3):\n   1. Add a new high score\n   2. Display high scores\n   3. Exit: ";
    string choice;
    cin >> choice;


    if (choice == Action::Add){

        ofstream file;
        
        file.open("score.csv");
        if (file.is_open()) {
            file << "id,title,year\n";

            cout << "Enter player's name: ";



            cout << "Enter score: ";

            cout << "Enter date(MM/DD/YYYY): ";
        }
        file.close();

    }

return 0;
}