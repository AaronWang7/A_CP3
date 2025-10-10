// Aw Movie Library
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

enum Action {
    View = 1,
    Add,
    Delete,
    Search,
    Exit
};

struct Movie {
    string title;
    int year;
    string director;
    string genre;
    string rating;
};

void loadMovies(vector<Movie>& movies, const string& filename) {
    movies.clear();
    ifstream file(filename);
    if (!file.is_open()) return;
    string line;
    while (getline(file, line)) {
        if (line.empty()) continue;
        stringstream ss(line);
        Movie m;
        string yearStr;
        getline(ss, m.title, ',');
        getline(ss, m.director, ',');
        getline(ss, yearStr, ',');
        getline(ss, m.genre, ',');
        getline(ss, m.rating, ',');
        m.year = stoi(yearStr);
        movies.push_back(m);
    }
    file.close();
}

void saveMovies(const vector<Movie>& movies, const string& filename) {
    ofstream file(filename);
    for (auto& m : movies) {
        file << m.title << "," << m.director << "," << m.year << "," << m.genre << "," << m.rating << "\n";
    }
    file.close();
}

void viewMovies(const vector<Movie>& movies) {
    if (movies.empty()) {
        cout << "No movies in library.\n";
        return;
    }
    for (size_t i = 0; i < movies.size(); ++i) {
        cout << "Movies: \n" << endl;
        cout << i + 1 << ". \n" <<  movies[i].title << " (" << movies[i].year << ")\n"
             << "   Director: " <<  movies[i].director << "\n"
             << "   Genre: " <<     movies[i].genre << "\n"
             << "   Rating: " <<    movies[i].rating << "\n";
    }
}

void addMovie(vector<Movie>& movies) {
    Movie m;
    cout << "Enter title: ";
    cin.ignore();
    getline(cin, m.title);
    //
    cout << "Enter director: ";
    getline(cin, m.director);
    //
    cout << "Enter year: ";
    cin >> m.year;
    cin.ignore();
    //
    cout << "Enter genre: ";
    getline(cin, m.genre);
    //
    cout << "Enter rating: ";
    getline(cin, m.rating);
    //
    movies.push_back(m);
    cout << "Movie added.\n";
}

void deleteMovie(vector<Movie>& movies) {
    if (movies.empty()) {
        cout << "No movies to delete.\n";
        return;
    }
    viewMovies(movies);
    cout << "Enter movie number to delete: ";
    int index;
    cin >> index;
    if (index < 1 || index > (int)movies.size()) {
        cout << "Invalid number.\n";
        return;
    }
    cout << "Delete " << movies[index - 1].title << "? (y/n): ";
    char confirm;
    cin >> confirm;
    if (confirm == 'y' || confirm == 'Y') {
        movies.erase(movies.begin() + index - 1);
        cout << "Movie deleted.\n";
    } else {
        cout << "Cancelled.\n";
    }
}

void searchMovies(const vector<Movie>& movies) {
    if (movies.empty()) {
        cout << "No movies to search.\n";
        return;
    }
    cout << "Search by:\n1. Title\n2. Director\n3. Genre\n4. Rating\n5. Year\nChoice: ";
    int option;
    cin >> option;
    cin.ignore();
    string keyword;
    int yearKey = 0;
    if (option == 5) {
        cout << "Enter year: ";
        cin >> yearKey;
    } else {
        cout << "Enter keyword: ";
        getline(cin, keyword);
    }
    bool found = false;
    for (auto& m : movies) {
        bool match = false;
        switch (option) {
            case 1: match = (m.title == keyword); break;
            case 2: match = (m.director == keyword); break;
            case 3: match = (m.genre == keyword); break;
            case 4: match = (m.rating == keyword); break;
            case 5: match = (m.year == yearKey); break;
            default: cout << "Invalid.\n"; return;
        }
        if (match) {
            cout << m.title << " (" << m.year << "), " << m.director << ", "
                 << m.genre << ", " << m.rating << "\n";
            found = true;
        }
    }
    if (!found) cout << "No matches found.\n";
}

int main() {
    vector<Movie> movies;
    string filename = "movies.csv";
    loadMovies(movies, filename);
    int user_choice = 0;
    do {
        cout << "\n1: View Movies\n2: Add Movie\n3: Delete Movie\n4: Search Movies\n5: Exit\nChoice: ";
        cin >> user_choice;
        switch (user_choice) {
            case View: viewMovies(movies); break;
            case Add: addMovie(movies); break;
            case Delete: deleteMovie(movies); break;
            case Search: searchMovies(movies); break;
            case Exit: saveMovies(movies, filename); cout << "Saved. Goodbye!\n"; break;
            default: cout << "Invalid choice.\n";
        }
    // Keep running until the user chooses to exit.
    } while (user_choice != Exit);
    return 0;
}
