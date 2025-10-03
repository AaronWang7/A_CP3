#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

struct Movie {
    string title;
    int year;
};


string to_string(double number, int precision = 2){
   stringstream stream;
   stream << fixed << setprecision(precision) << number;
   return stream.str();
}

int main(){
   double number =  3.14;  
   cout << to_string(number,2) << endl;
   Movie movie;
   Movie years;
   //parsing
   string users = "Terminator 1, 1984";
   stringstream fix;
   fix.str(users);
   getline(fix, movie.title, ',');
   fix >> years.year;
   fix >> movie.year;   
   cout << movie.title << " " << movie.year << endl; 

return 0;   


}
