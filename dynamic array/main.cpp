// deynamic array AW

#include <iostream>

#include <memory>

#include <string>


using namespace std;

string user_enter[] = {"Red", "Blue", "Green", "Yellow", "Purple"};


int main(){
    int capacity = 5;
    int* user_input = new int[capacity];

    int entries = 0;
    while(true){
            cout << "Enter something you could think of(Books, Movies, Shows, Colors, Comics, etc.) :";
        cin >> user_input[entries];
        entries++;
        cout << "You entered: " << user_enter << endl;
        if (entries == capacity){
            capacity += 5;
            int* temp = new int[capacity];
            for (int i=0; i < entries; i++){
                temp[i] = user_input[i];
            delete[] user_input;
            user_input = temp;
        for(int i = 0; i < entries; i++){
            cout << user_input[i] << endl;


            }
        }

    }

    return 0;

}


}






























/*
Write a program that asks the user to enter books, movies, shows, colors, comics, etc. until they can't think of anymore. 

Start your array with only 5 spaces. Continue to increase the size of the array as your user hits the array cap. 

THEN, print out each of the inputs they gave you!

KEY REMINDERS:
Remember you have to set your variable types
You have to get the standard library to create your inputs and outputs 
Make sure your arrows are pointing the right way for the input/output stream. 
You have to set the length of the array when you create it
*/