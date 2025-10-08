// Aw Movie Library

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <vector>

using namespace std;


enum Action{
    View = 1, 
    Add = 2,
    Delete = 3,
    search = 4,
    Exit = 5
};

struct  Movie{
      string rating;
      string director;
      string genre;
      string title; 
      int year;
};


Movie parseMovie(string str){
   Movie movie;
   stringstream stream; // parsing
   stream.str(str); // parsing, ready to split
   getline(stream, movie.title, ',');
   stream >> movie.year;
   
   return movie;
}


string to_string(double number, int precision = 2){

   stringstream stream;
   stream << fixed << setprecision(precision) << number; // control the conversion
   return stream.str();

}

int main(){
    Movie movie;
    cout << "Enter your choice: " << endl;
    cout << "1: View Movies" << endl << "2: Add Movie" << endl << "3: Delete Movie" << endl << "4: Search Movies" << endl << "5: Exit" << endl;
    int user_choice;
    cin >> user_choice;
    if (user_choice == Action::View){
        ifstream ifile;
        ifstream ifile;
        istringstream iss(line);
        string item;

        iflile.open("movies.csv");
        if (ifile.is_open()){
        string line;
        vector<Movie> movies;
        getline(ifile,line); //skip header line
        while(getline(ifile,line)){
        
        getline(ifile, ',')
        if(iss.empty()) continue;
        string item;
    
        Movie movie;
        getline(iss,item, ',');
        movie.rating = stoi(Rating);
        cout << item << endl;
        getline(iss,item, ',');
        movie.year = stoi(year);
        cout << item << endl;
        getline(iss,item, ',');
        movie.director = stoi(Director);
        cout << item << endl;
        getline(iss,item,',');
        movie.genre = stoi(Genre);
        getline(iss,item,',');
        movie.title = stoi(Name);
        movies.push_back(movie);
        




    
    }
    ifile.close();

    for(movie i: movies){
        cout << i.genre << " " << i.title << " " << i.year << endl;
    }
}

        
    }

   auto movie = parseMovie("Terminator, 1984");
   cout << movie.title << " " << movie.year << endl;
   fstream file;
   file.open("movies.csv", ios::in | ios :: out | ios::app);
   if (file.is_open()){

      

      file.close();

   }
   
   
   
   return 0;





return 0;

}





/*INSTRUCTIONS:
Create an application that manages your Movie Library using structures to store movie details and enumerations for menu options. 
Your program should persist movie data by reading from and writing to an external file in CSV format.

Main menu needs to allow our user to load the library from a file (I will use a different one than the example one I have given you), view all movies, add a movie, delete a movie, and search movies.

The search menu should allow the user to select what they would like to search by, then the specific value they would like to search. 

NOTE: You need to build a sequential search algorithm for this project (it is a state standard) 

NOTE: Practice Movie ListDownload Practice Movie List

EXAMPLE:
Rating (e.g., G, PG, PG-13, R)
Director (e.g., Christopher Nolan)
Release Year (e.g., 1987)
Genre (e.g., Action, Comedy)
KEY REMINDERS:
Use structures to organize movie data.
Use enumerations for the menu.
Incorporate input validation and error handling.
Make sure the program is user-friendly and clear.
*/