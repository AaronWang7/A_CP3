// Aw Binary and Searching

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
/* Convert other data types to strings!
istringstream => reading a string
ostringstream => writing to a string
stringstream => reading and writing to a string
*/

using namespace std;

struct  Movie{
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
   double number =  3.14;  
   cout << to_string(number,2) << endl;

   //parsing
   string users = "10 20";
   stringstream fix;
   fix.str(users);
   int first;
   fix >> first;
   int second;
   fix >> second;

   cout << first << " " << second << endl;



   auto movie = parseMovie("Terminator, 1984");
   cout << movie.title << " " << movie.year << endl;
   fstream file;
   file.open("file.txt", ios::in | ios :: out | ios::app);
   if (file.is_open()){

      

      file.close();

   }
   
   
   
   return 0;





return 0;

}








/*

QUESTIONS:

    What is a potential issue with converting values to strings without control? - [ Add too many 0s ]
 - []
    How can you control the way a value is converted to a string? - [ Using stringstream with manipulators like fixed and setprecision ]
 - []
    Why is it useful to create a reusable function for converting values to strings? - [ reduce code duplication ]
 - []
    What is parsing in the context of working with strings? - [Analyzing a string to information]
 - []
    How do you extract specific information from a string in programming? - [In the code]
 - []
    When a title contains a space, which function should you use to read it properly? - [getline() ]
 - []
    Why might extra zeros be added to a string when converting a value without control? - [showing trailing zeros]
 - []
    How does controlling the string conversion process benefit your program? - [prevents data loss, and improves output readability]
 - []
    Give an example scenario where parsing a string would be necessary in a program. - [Extracting email addresses from a text file]
 - []
    Why are images, audio, and PDFs not readable by humans when stored in files? - [They're stored in binary format with encoded data rather than text]
 - []
    What file extensions are commonly used to create binary files? - [.exe]
 - []
    When writing to a binary file, what does the first parameter (reinterpret_cast<char*>(&numbers)) represent? - [ pointer to the memory location of the data]
 - []
    Why does the binary file only take 12 bytes while the array of integers might be larger? - [Binary files store raw data directly without text overhead]
 - []
    How does reading individual numbers from a binary file differ from reading the entire list at once? - [Individual reading processes one element at a time]
 - []
    What is the main difference between sequential search and binary search? - [Sequential checks each element in order, binary repeatedly divides the search space in half]
 - []
    In which type of data structure is binary search most efficient? - [Sort arry]
 - []
    What is a key requirement for binary search to work correctly on a list? - [The list must be sorted]
 - []
    How does sequential search find an item in a list? - [By checking each element one by one from start to end]
 - []
    Why is binary search generally faster than sequential search for large, sorted lists? - [It divided by half each time, much more faster]
 - []

*/
