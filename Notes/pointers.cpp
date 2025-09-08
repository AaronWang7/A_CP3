// Aw Pointers Notes

#include <iostream>
using namespace std;


int number[] = {4,2,6,8,14,24,65}; // global variable

void divide(int* list, int size){
    for(int i=0; i < size; i++){
        list[i] = list[i] / 2; // divide each element in the array by 2
        cout << list[i] << " "; // print the modified array
        
        
    }    
    cout << "Address of numbers in divide function: " << *list << endl;
}

int main() {
    int capacity = 5;
    int* sanity = new int[capacity];
    int entries = 0;
    //Pointer holds address of a variable instead of information
    int num = 4; // num is an integer variable that holds the value 4
    int* pnum = &num; // & gets the address of num, pNum is a pointer to an integer
    int month = 9; // month is a copy of num, so month is also 4
    int day = 5;  // day is a copy of num, so day is also 4
    
    const double pi = 3.14159; // PI is a constant double variable that holds the value of pi
    const double gpa = 3.99999;

    //pi = 89.3; // error: cannot change the value of a constant variable
    * pnum = 8; // updated the value at the address stored in pnum to 8, so num is now 8
    


    // CONSTANT POINTERS 
    const double* ppi = &pi; // vaule of pi cannot be changed
    // *pday = 9; // error: cannot change the value at the address stored in pday
    ppi = &gpa; // we can change the address stored in pday to point to another constant integer

    int* const pday = &day; //can change vaule, but not the location being pointed at

    //*pday = 6;
    //* pday = &num; // error: cannot change the address stored in pday

    const int* const pmonth = &month; // cannot change the value or the address stored in pmonth
    cout << "Number: " << num << endl; // prints the address of num
    cout << "location: " << *pnum << endl; // dereference the pointer to get the value at that address, which is 8
    divide(number,size(number)); 
    cout << (pnum > pday) << endl; // false, because pnum points to num and pday points to day
    if(pnum != nullptr)
        cout << *pnum << endl;
        pnum++;

    cout << *pnum << endl; // prints the value at the next address, which is 0 (undefined behavior)

    

    while(true){
        cout << "Number : ";
        cin >> sanity[entries];
        if(cin.fail()) break;
        entries++;
        if (entries == capacity){
            capacity += 5;
            int* temp = new int[capacity];
            for (int i=0; i < entries; i++){
                temp[i] = number[i];
            delete[] sanity;
            sanity = temp;
            }
        }
    }

    for(int i = 0; i < entries; i++){
        cout << sanity[i] << endl;

    delete[] sanity; // free the memory allocated for sanity


    }

    //

    
    return 0;
}



/*
What is a pointer?:
Why do we use pointers?
How do I create a pointer
What is indirection or de-referencing?
What are constant pointers? How are the different types used?
How do you pass a pointer into a function?
Why would you pass a pointer to a function?
How do you compare pointers?
What is dynamic memory allocation?
What is the Stack?
What is the Heap?
What are smart pointers?
*/