#include <iostream>
#include <string>

using namespace std;

int main() {
    int cap = 5; 
    int entries = 0; 

    
    string* user_enter = new string[cap];

    cout << "Enter items (Books, Movies, Shows, Colors, Comics, etc.). Type 'done' to finish.\n";

    while (true) {
        cout << "Enter something: ";
        string input;
        getline(cin, input);

        if (input == "done") { 
            break;
        }

        
        if (entries == cap) {
            cap += 5; 
            string* temp = new string[cap];

            
            for (int i = 0; i < entries; i++) {
                temp[i] = user_enter[i];
            }

            delete[] user_enter; 
            user_enter = temp;  
        }

        user_enter[entries] = input; 
        entries++;
    }
    
    cout << "\nYou entered:\n";
    for (int i = 0; i < entries; i++) {
        cout << i + 1 << ". " << user_enter[i] << endl;
    }

    
    delete[] user_enter; 
    return 0;
}
