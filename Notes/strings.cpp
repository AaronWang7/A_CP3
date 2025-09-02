// Aw Strings, arrays and conditionals
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    // low level verstion of random numbers
    int seconds = time(nullptr);
    string names = "";
    srand(seconds);
    int my_num = rand() % 11;
    cout << my_num <<endl;
    
    // Arrays need the index number listed in brackets when the variable is set
    int grades[11] = {99,24,48,67,48,84,77,85,68,98,78};
    cout << grades[3] <<endl;
    //Strings
    char name[7] = "Aienna";
    cout << name << endl;
    string sentence = "The quick brown fox jumps over the lazy dog";
    cout << sentence << endl;
    cout << sentence.length
    
    () << endl;
    cout << (name > sentence) << endl;
    //.starts_with() . ends_with()
    //.empty()
    // . front() <= returns the frst character
    // . blkack <=  return the last character
    
    names.append(" LaRose");
    names.insert(7,"k");
    cout << name << endl;
    int first = sentence.find("fox");// ,= beginning index of 1st occurance
    int end = first + 3;
    //names.erase();
    //names.clear(); <= makes empty string
    sentence.replace(first,end,"Badger ");
    cout << sentence <<endl;

    // screaching a string
    cout << sentence.find("LaRose");
    // refind() <= starts the serach at the end of the string
    // find_first_of() <= gets first occurance of any character in the given string
    cout << names.find("a") << endl;
    cout << names.find_first_of("a") <<endl;
    // find _last_of() 
    cout << sentence.find_first_not_of("The quick") << endl;
    // .find_last_not_of()
    cout << sentence.substr(0,4) << endl;

    if(name < sentence){
        cout << names.front() << "is eariler in the alphabet than" << sentence.front() << endl;
    }else if(sentence < name){
        cout << names.front() << "is eariler in the alphabet than" << sentence.front() << endl;

    }else{
        cout << names.front() << "is eariler in the alphabet than" << sentence.front() << endl;
    }
    return 0;

}









/*
What is Narrowing? Bigger to smaller type
What is a basic way to generate random numbers in C++? rand()
What is an array?  items of the same type  
How do I create an array?int nums[];
How do you make strings in C? Char
How did C++ improve creating strings?  added string
How do I search a string? strfind
How do I modify a string? change charr
What are some string methods? length(), find(), substr(), append(), replace()
*/
