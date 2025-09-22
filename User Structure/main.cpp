#include <iostream>
#include <string>

using namespace std;

struct User {
    string username;
    string password;
    bool isAdmin;
};

bool operator==(const User& a, const User& b) {
    return a.username == b.username;
}

ostream& operator<<(ostream& os, const User& u) {
    os << u.username;
    return os;
}

int main() {
    User existingUsers[10] = {
        {"Aaron","pass1",false},
        {"Tom","pass2",false},
        {"Alice","pass3",true},
        {"Bob","pass4",false},
        {"Carol","pass5",true},
        {"Dave","pass6",false},
        {"Eve","pass7",false},
        {"Frank","pass8",true},
        {"Grace","pass9",false},
        {"Hank","pass10",true}
    };

    User newUser;
    cout << "Enter your username: ";
    cin >> newUser.username;
    cout << "Enter your password: ";
    cin >> newUser.password;
    cout << "Are you admin? (1 for yes, 0 for no): ";
    cin >> newUser.isAdmin;

    bool exists = false;
    for (int i = 0; i < 10; i++) {
        if (newUser == existingUsers[i]) {
            exists = true;
            break;
        }
    }

    if (exists) {
        cout << "User: " << newUser << "\nAlready exists." << endl;
    } else {
        cout << "Welcome\nUser: " << newUser << endl;
    }

    return 0;
}
