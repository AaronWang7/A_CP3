// Aw Pointers Notes

#include <iostream>
using namespace std;


int number[] = {4,2,6,8,14,24,65}; // global variable

void divide(int* list, int size){// function that takes a pointer to an integer array and the size of the array
    for(int i=0; i < size; i++){// loop through the array
        list[i] = list[i] / 2; // divide each element in the array by 2
        cout << list[i] << " "; // print the modified array
        
        
    }    
    cout << "Address of numbers in divide function: " << *list << endl; // print the address of the first element in the array
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

    
// DYNAMIC MEMORY ALLOCATION
    while(true){// infinite loop
        cout << "Number : ";// prompt the user to enter a number
        cin >> sanity[entries];// store the user input in the array at the current index
        if(cin.fail()) break;// if the user input is not a number, break the loop
        entries++;// increment the index
        if (entries == capacity){// if the index is equal to the capacity of the array, we need to increase the size of the array
            capacity += 5;// increase the capacity by 5
            int* temp = new int[capacity];// create a new array with the new capacity
            for (int i=0; i < entries; i++){// copy the old array to the new array
                temp[i] = number[i];// copy the old array to the new array
            delete[] sanity;// free the memory allocated for the old array
            sanity = temp;// point sanity to the new array
            }
        }
    }

    for(int i = 0; i < entries; i++){   // print the user inputs
        cout << sanity[i] << endl;// print the user input at the current index

    delete[] sanity; // free the memory allocated for sanity


    }

    //

    
    return 0;// return 0 indicates that the program ended successfully
}



/*
What is a pointer?: variable that stores a memory address
Why do we use pointers? Save memory
How do I create a pointer int *p
What is indirection or de-referencing? Using *p to get or set the value
What are constant pointers? How are the different types used? const int *p pointer can change
How do you pass a pointer into a function? In the code
Why would you pass a pointer to a function? more efficiently
How do you compare pointers? ==
What is dynamic memory allocation? new
What is the Stack? local vaeiable
What is the Heap? In code
What are smart pointers? unique_ptr
*/
