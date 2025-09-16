#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main() {
    int cap = 5; 
    int entries = 0; 

    unique_ptr<string[]> user_enter = make_unique<string[]>(cap);

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
            unique_ptr<string[]> temp = make_unique<string[]>(cap);
            for (int i = 0; i < entries; i++) {
                temp[i] = user_enter[i];
            }
            user_enter = move(temp);
        }

        user_enter[entries] = input; 
        entries++;
    }

    cout << "\nYou entered:\n";
    for (int i = 0; i < entries; i++) {
        cout << i + 1 << ". " << user_enter[i] << endl;
    }

    return 0;
}
