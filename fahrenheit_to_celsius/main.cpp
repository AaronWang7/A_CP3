// AW Fahrenheit to Celsius
#include <iostream>
using namespace std;

int main(){
    cout<< "Enter in Fahrenheit:";
    float user_input = 0;
    cin >> user_input;
    float celsius = (user_input - 32) * 5/9;
    cout << user_input << " Degrees Fahrenheit is " << celsius<< " Degrees Celsius"<<endl;
    return 0;
}