// Aw smart pointers
#include <iostream>
#include <memory>


using namespace std;

int main() {
    // Unique pointers
    unique_ptr <int> x(new int); // unique pointer, only one pointer can point to the address
    unique_ptr <int> y = make_unique<int>();
    auto yy = make_unique<int>();
    *x = 10;
    *y = 7;
    cout << *x << endl;
    
    // Shared pointers
    auto z = make_shared<int>();// shared pointer, multiple pointers can point to the same address
    *z = 4;// dereference operator

    cout << *x << ", "<< *y << ", " << *z << endl;// 10, 7, 4
    return 0;// return 0 indicates that the program ended successfully
}