// deynamic array AW

#include <iostream>

#include <memory>

#include <string>

using namespace std;


int main(){
    int cap = 5;
    string user_enter[] = {"red", "blue", "green", "yellow", "purple"};
    int entries = 0;
    while(true){
        cout << "Enter something you could think of(Books, Movies, Shows, Colors, Comics, etc.) :";
        cin >> user_enter[entries];
        entries++;
        cout << "You entered: " << user_enter[entries-1] << endl;
        if (entries == cap){
            cap = cap + 5;
            cout << cap << endl;
            string* temp = new string[cap];
            for (int i=0; i < entries-1; i++){
                temp[i] = user_enter[i];

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