//Aw Text files
/*
#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>

using namespace std;


int getNumber(const string& promt){
     int num;

    /*
    terminal - cout, cin (User given)
    file - txt, csv, binary
    network - internet, other computers
    */
   /*
   while(true){
        cout << promt;
        cin >> num;
        cout << "tell me a number\n";
        cin >> num;
        if(cin.fail()){
        cout << "Enter a vailid number!\n";

        }else break;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        return num;
*/
/*    }

}

int main(){
   

    int first = getNumber("Enter in your first number:\n");
    int second = getNumber("Enter in your second number:\n");
    cout << "You entered" << first << " and " << second << endl;

    /*
    ifstream - input file stream
    ofstream - output file stream
    fstream - file stream (input and output)
    

    ofstream file;
    file.open("data.txt");
    if(file.is_open()){
    file << setw(20) << "Hello" << setw(20) << "World\n";
    file.close();
   
    }
    file.open("data.csv");
    if(file.is_open()){
    file << "id, title, year\n";
    << "1, The Matrix, 1999\n";
    << "2, Inception, 2010\n";
    file.close();


    return 0;
    }
}
*/



//Aw Text files
//if (str.empty()) continue;
//string str;
//Movie movie;
//vector<string> movies;
//while(getline(ifile,str));{
//movie.pushback(str)
//}
//while(!iflie.eof()){
// if stream file;
//file.open("data.txt");
//if (file.is_open()){
//string linfo;
//fie >> info;
//cout << info;
//file.close();
//getline(file,str);
//cout << info;
//file.close();
/*
string str;
getline(file,str,',');
Movie movie;
movie.id = stoi(str);
getline(file,str,',');
movie.title = str;
getline(file,str);
movie.year = stoi(str);
*/



#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


struct Movie{
    int id;
    string title;
    int year;
};



int getNumber(const string& prompt) {
    int num;
    while (true) {
        cout << prompt;
        cin >> num;
        if (cin.fail()) {
            cout << "Enter a valid number!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    return num;
}

int main() {
    int first = getNumber("Enter your first number:\n");
    int second = getNumber("Enter your second number:\n");
    cout << "You entered " << first << " and " << second << endl;

    // Write to a text file
    ofstream file;
    file.open("data.txt");
    if (file.is_open()) {
        file << setw(20) << "Hello" << setw(20) << "World\n";
        file.close();
    }

    // Write to a CSV file
    file.open("data.csv");
    if (file.is_open()) {
        file << "hi\n";
        file << "1,The Matrix,1999\n";
        file << "2,Inception,2010\n";
        file.close();
    }

    return 0;
}






/*
ifstream ifile;

iflile.open("data.csv");
if (ifile.is_open()){
string line;
vector<Movie> movies;
getline(ifile,line); //skip header line
while(getline(ifile,line)){
    
    getline(ifile,str, ',')
    instringstream iss(line);
    if(iss.empty()) continue;
    string item;

    Movie movie;
    getline(iss,item, ',');
    movie.id = stoi(item);
    cout << item << endl;
    getline(iss,item, ',');
    movie.year = stoi(year);
    cout << item << endl;
    getline(iss,item, ',');
    movie.title = item;
    cout << item << endl;
    movies.push_back(movie);





    
    }
    ifile.close();

    for(movie i: movies){
        cout << i.id << " " << i.title << " " << i.year << endl;
    }
}



*/















/*What are the 3 main sources of data for a program 
What are streams? Data between program
What are the different streams we might need to include in a program? cin cout
What is the base class for all streams? ios
What is buffer? tempeery, allow to work even input was wrong 
How do you clear the buffer? cin.clear()
How do you handle invalid inputs from the terminal cin.clear() and in the code
What streams are for files specifically  ifstream ofstream fstream
How do you write to a text file? In the code
What do stream manipulators let us do? control format
How do you write to a CSV? In the code
How do you read a text file? getline(ifstream, string) in the code
How do you read a CSV file? getline(ifstream, string) in the code
What is a delimiter? ','
How do you read an entire CSV?loop through lines
How do you turn items from a CSV into objects of a structure? In the code

*/
