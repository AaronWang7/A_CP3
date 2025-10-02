//AW high score
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>
#include <sstream>

using namespace std;

struct HighScore {
    string playerName;
    int score;
    string date;
};

vector<HighScore> scores;
string filename = "highscores.csv";

void readFromFile() {
    ifstream file;
    file.open(filename);
    if (!file.is_open()) {
        return;
    }
    
    string line;
    while (getline(file, line)) {
        if (line.empty()) continue;
        
        HighScore hs;
        stringstream ss(line);
        string item;
        
        
        getline(ss, item, ',');
        hs.playerName = item;
        
        
        getline(ss, item, ',');
        hs.score = stoi(item);
        
        
        getline(ss, item);
        hs.date = item;
        
        scores.push_back(hs);
    }
    file.close();
}

void writeToFile() {
    ofstream file;
    file.open(filename);
    if (!file.is_open()) {
        cout << "Error saving to file!\n";
        return;
    }
    
    for (const auto& score : scores) {
        file << score.playerName << "," << score.score << "," << score.date << "\n";
    }
    file.close();
}

void displayScores() {
    cout << "\n--- High Scores ---\n";
    if (scores.empty()) {
        cout << "No high scores yet!\n";
        return;
    }
    
    for (size_t i = 0; i < scores.size(); i++) {
        cout << i + 1 << ". Player: " << scores[i].playerName 
             << " | Score: " << scores[i].score 
             << " | Date: " << scores[i].date << "\n";
    }
}

void addScore() {
    HighScore newScore;
    
    cout << "Enter player's name: ";
    cin.ignore();
    getline(cin, newScore.playerName);
    
    cout << "Enter score: ";
    cin >> newScore.score;
    
    cout << "Enter date (MM/DD/YYYY): ";
    cin >> newScore.date;
    
    scores.push_back(newScore);
    cout << "High score added successfully.\n";
}

int getMenuChoice() {
    int choice;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add a new high score\n";
        cout << "2. Display high scores\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        
        cin >> choice;
        if (cin.fail()) {
            cout << "Invalid input! Please enter 1, 2, or 3.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (choice < 1 || choice > 3) {
            cout << "Invalid choice! Please enter 1, 2, or 3.\n";
        } else {
            break;
        }
    }
    return choice;
}

int main() {
    readFromFile();
    
    while (true) {
        int choice = getMenuChoice();
        
        if (choice == 1) {
            addScore();
        } else if (choice == 2) {
            displayScores();
        } else if (choice == 3) {
            writeToFile();
            cout << "Goodbye!\n";
            break;
        }
    }
    
    return 0;
}
