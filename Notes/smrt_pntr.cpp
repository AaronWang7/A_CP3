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
    auto z = make_shared<int>();
    *z = 4;

    cout << *x << ", "<< *y << ", " << *z << endl;
    return 0;
}