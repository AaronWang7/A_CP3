// Aw User Strucutres 

# include <iostream>
#include <string>
#include <vector>

using namespace std;

struct users{
    string user1;
    string user2;
    string user3;
    string user4;
    string user5;
    string user6;
    string user7;
    string user8;
    string user9;
    string user10;

};
string user_name = "";
bool isUser = false;

int main (){
    vector<users> user_names;
    cout << "Enter in your user name :";
    cin >> user_name;
    cout << user_name;



    users user_names = {"Aaron","Tom","name1","name2","name3","name4","name5","name6","name7","name8"};
    users user_input = user_name;


     for(int i=0; i < 9 ; i++){
        if (user_name == user_names) {
            isUser = true;
            cout << "You are in the list!";


    for (const auto& a : user_names) {
        cout << a << endl;
    }


    if (user_name == user_names) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    return 0;
}



    }
}



return 0;


}











/*

INSTRUCTIONS:
Write a program that takes in a username, password, and admin status (you can do more but that is the minimum). The program then uses that information to create a user object from a structure. 

It then needs to compare that user with a list of already existing users (10 users minimum) to see if the user already exists.

OUTPUT EXAMPLE: 

User: Alex LaRose

Already exists. 

OR

Welcome

User: Alex LaRose

KEY REMINDERS:
Remember you have to set your variable types
You will need to over write an operator so that you can compare two of the user objects. 
You have to get the standard library to create your inputs and outputs
Make sure your arrows are pointing the right way for the input/output stream. 

*/