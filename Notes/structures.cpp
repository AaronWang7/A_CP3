/* // Aw Strucutres Notes

# include <iostream>
#include <string>
#include <vector>

using namespace std;

 bool operator== (const person& first, const person& second){
     ssidDate.year == second,releaseDate.month
     if (name == second.name &&
        ){
            return true;
            cout << "";
        Equal
    }else{
        return false;
        cout << "not equal";
    }
}
ostream& operator <<(ostream& stream, Movie& movie){
    stream << movie.name;
    return stream;
}
struct Date {
    short year = 1900;
    short month = 1;
    short day = 1;

};
struct person {
    string name;
    Date ssidYear;
    string email;

    

   
};

int mian(){
    vector <person> aarons;
    void showMovie(Movie* movie){
        cout << (*movie).title;
        cout << movie -> title;
    }
    //Movie movie;//Unclear 
    //movie.title = "Temrinator";
    person aaron = {"Aaron",123,"Email"};
    aarons.push_back({"Aaron",123});
    arrons.push_back({"Aaron 2",234});

    person aaron1 = {"Aaron",123,"Email"};
    person aaron2 = {"Aaron2",234,"Emails"};
    showMovie(&movie1);
    
    auto [name, ssid, email] {aaron};

    for (auto aaron: aarons){

        cout << name << endl;
        cout << ssidYear.year << endl;

    }
    cout << aaron1.equals(aaron2) << endl;
    //cout << "Movie and Title: " << movie << endl; 
    
    if (movies.name == movie2.name){
        cout << "Equal";
    
    }else{
        if (aaron1 == aaron1)
            cout << aaron1 << "Equal";
    }else { 
        cout << aaron1 << "Is not " <<  aaron2 << endl;
    }
    
    return 0;

}


*/

// Aw Structures Notes

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Date {
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct person {
    string name;
    Date ssidYear;
    string email;
};

// Overload == operator for person
bool operator==(const person& first, const person& second) {
    return (first.name == second.name &&
            first.ssidYear.year == second.ssidYear.year &&
            first.email == second.email);
}

// Overload << operator for person
ostream& operator<<(ostream& stream, const person& p) {
    stream << p.name << " (" << p.ssidYear.year << ") " << p.email;
    return stream;
}

int main() {
    vector<person> aarons;
    aarons.push_back({"Aaron", {2000, 5, 10}, "aaron@email.com"});
    aarons.push_back({"Aaron2", {2001, 6, 11}, "aaron2@email.com"});

    for (const auto& a : aarons) {
        cout << a << endl;
    }

    person aaron1 = {"Aaron", {2000, 5, 10}, "aaron@email.com"};
    person aaron2 = {"Aaron2", {2001, 6, 11}, "aaron2@email.com"};

    if (aaron1 == aaron2) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    return 0;
}























/*
What are structures?
How do you build a structure?
What can be held in a structure?
How do you access the information in a structure?
How do you overload an operator
*/



















