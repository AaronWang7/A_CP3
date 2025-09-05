// AW Changing Strings 

#include <iostream> // include the iostream library
#include <string> // include the string library
using namespace std; // using the standard namespace

string name = "aaron wang"; // 10 characters
string sentence = "The quick brown fox jumps over the lazy dog!"; // 43 characters

int main() { // main function
auto index = name.find(' '); // find the index of the space character
    string first_name = name.substr(0, index); // "Aaron"
    string last_name = name.substr(index+1); // "Wang"
    first_name[0] = toupper(first_name[0]); //toupper()
    //tolower()

    
    cout << first_name << endl << last_name << endl; // print first and last name on separate lines

    int length = size(sentence); // or sentence.length()
    for(int i=0; i < length; i++){ // loop through each character in the string
        if (isspace(sentence[i])){ // check if the character is a space
            sentence[i] = '_';//change the space to _
        }else if (isupper(sentence[i])){ // if it's an uppercase letter
            sentence[i] = tolower(sentence[i]); // change it to lowercase
            
        }else{ // if it's a lowercase letter
            sentence[i] = char((int(sentence[i]) + 4) % 26 + 97); // caesar cipher shift by 4
        }
        

    }
    cout << sentence << endl; // print the modified sentence

    cout << R"(This is a "Question" . . . I think)" << endl; // print a raw string literal
    // R"()" is a raw string literal, and it ignores escape characters like \n, \t, etc, so you can write strings that contain backslashes and quotes without needing to escape them.
    return 0; // return 0 to indicate successful completion

} // end of main function


/*
How do I get a substring from within a string?
How do I create an escape character in C++
How do I convert a string to another data type?
What is a raw string and when would I use it?: A rwa string ignores escape characters like \n, \t, etc, so you can write strings that contain backslashes and quotes without needing to escape them

*/