// Aw Enumeration Note

#include <iostream>

using namespace std;
enum Action{
    List = 1, // if didn't sign a vaule defult will be 0,1,2,...
    Add = 2,
    Update = 3
};

// can not be duplacticated
enum class Operation{
    List = 1, // if didn't sign a vaule defult will be 0,1,2,...
    Add = 2,
    Update = 3
}


int main (){
    // List of opitions
    //const int list = 1;
    //const int add= 2;
    //const int update = 3;
    int input;

    cout << 
    // Giving instructions
    "1: List invoices" << endl <<
    "2: Add invoices" << endl <<
    "3: Upadte invoices" << endl <<
    "Select:";
    cin >> input;
    //Based on user selections
    if (input == static_cast<int>(Operation::List)){
        cout << "list invoices"<< endl;
    }else if (input == Action::Add)
    {
        cout << "I haven't built this yet";
    }else if (input == Action::Update)
        cout << "Suprisingly I haven;'t built this eigther";
    else{
        cout << "Not a option!";
    }
    

    
    
    
    return 0;

}


/*
How do you build enumeration? enum
How do we display our enumerator? In the code  29 - 32
Why does it matter that enumerators are constants?? it won't give error when having the same name 
What is the default beginning enumerator? number 0
How do you give a different default value? defult vaule is 0,1,2, y adding one u can change it
What is a strongly typed enumerator? Completly different from others, always convert to int so it will need static_cast<int>(Operation::List)
How are strongly typed enumerators different from a normal one? Convert to Int
 */

 