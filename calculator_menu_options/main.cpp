// Aw calculator menu options

#include <iostream>

using namespace std;
enum Action{
    Addition = 1, // if didn't sign a vaule defult will be 0,1,2,...
    Subtraction = 2,
    Multiplication = 3,
    Divison = 4,
    Exit = 5,
};

float first_num;
float second_num;
float answer;
bool breaking = false;
int main (){
    // List of opitions
    //const int list = 1;
    //const int add= 2;
    //const int update = 3;
    int input;
while (breaking == false){
    cout << 
    // Giving instructions
    "1: Addition" << endl <<
    "2: Subtraction" << endl <<
    "3: Multiplication" << endl <<
    "4: Division" << endl <<
    "5: Exit" << endl <<
    "Select:";
    cin >> input;
    //Based on user selections
    if (input == Action::Addition){
        cout << "Enter in your first number:" << endl;
        cin >> first_num;
        cout << "Enter in your second number:" << endl;
        cin >> second_num;
        answer = first_num + second_num;
        cout << first_num << " + " << second_num << " = " << answer << endl;  
    }else if (input == Action::Subtraction){
        cout << "Enter in your first number:"<< endl;
        cin >> first_num;
        cout << "Enter in your second number:"<< endl;
        cin >> second_num;
        answer = first_num - second_num;
        cout << first_num << " - " << second_num << " = " << answer << endl;  
    }else if (input == Action::Multiplication){
        cout << "Enter in your first number:"<< endl;
        cin >> first_num;
        cout << "Enter in your second number:"<< endl;
        cin >> second_num;
        answer = first_num * second_num;
        cout << first_num << " X " << second_num << " = " << answer << endl;  
    }else if (input == Action::Divison){
        cout << "Enter in your first number:"<< endl;
        cin >> first_num;
        cout << "Enter in your second number:"<< endl;
        cin >> second_num;
        answer = first_num / second_num;
        cout << first_num << " / " << second_num << " = " << answer << endl;  
     
    }else if (input == Action::Exit){
            cout << "Goodbye!" << endl;
            breaking = true;
     
     }else{
        cout << "Not a option!";
    }
    

    
    
    
    return 0;
}

}




/*INSTRUCTIONS:
Write a program that creates a user menu for a basic calculator using enumeration in C++. The calculator should be able to perform addition, subtraction, multiplication, and division. The program should display a menu of options, allow the user to select an operation, input two numbers, perform the calculation, and display the result. The program must continue to run till the user chooses to exit and have proper input handling. 

OUTPUT EXAMPLE: 

Calculator Menu:

Addition
Subtraction
Multiplication
Division
Exit
Enter your choice (1-5): 1 Enter first number: 10 Enter second number: 5 Result: 10 + 5 = 15

KEY REMINDERS:
Set appropriate variable types (e.g., double for temperatures).
Use at least one decimal number in your conversion calculations to ensure accurate results.
You have to get the standard library to create your inputs and outputs
Make sure your arrows are pointing the right way for the input/output stream. 
Implement error handling for invalid menu choices.*/