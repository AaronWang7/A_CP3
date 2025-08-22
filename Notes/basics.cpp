// AW Variables, Data Types, Inputs and Outputs

#include <iostream>
using namespace std;//so we don't need to include a std before print and input every single time 

int main(){
    int students_in_class = 11, grade = 80;
    short days = 5;
    long years = 2554l;//If didn't put a l in the end it will become a int
    const float pi = 3.14f;//Float will compile to double without f at the end
    //pi = 3.1444; won't change the data type because of const is there
    bool on = true;
    char name = 'V';
    cout<< "Tell me your age :";
    int age;
    cin >> age;
    int divide = students_in_class/days;
    cout<< divide;//will only print out int
    cout << "You are:" << age<<endl;
    cout << "Number of students  " << students_in_class<<endl;
    //cout << students_in_class/days; won't work untill changed the double
    return 0;
}

//int takes 4 bytes of space, range is (-26 to 2b)
