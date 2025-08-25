// Aw Strings, arrays and conditionals
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    // low level verstion of random numbers
    int seconds = time(nullptr);
    srand(seconds);
    int my_num = rand() % 11;
    cout << my_num <<endl;

    return 0;
}
















/*
What is Narrowing? 
What is a basic way to generate random numbers in C++?
What is an array?
How do I create an array?
How do you make strings in C?
How did C++ improve creating strings? 
How do I search a string?
How do I modify a string?
What are some string methods? 
*/