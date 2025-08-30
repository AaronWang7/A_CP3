#include <iostream>
using namespace std;

int main() {
    string user_name = "";
    string user_login[5] = {"Tom", "Aaron", "Jack767", "apple989", "pie981"};
    string admin_login[2] = {"kol999", "slsj918"};

    cout << "Enter in your user name: ";
    cin >> user_name;

    bool isAdmin = false;
    bool isUser = false;

    for (int i = 0; i < 2; i++) {
        if (user_name == admin_login[i]) {
            isAdmin = true;
            break;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (user_name == user_login[i]) {
            isUser = true;
            break;
        }
    }

    if (isAdmin) {
        cout << "Hello Admin " << user_name << endl;
    } else if (isUser) {
        cout << "Welcome back " << user_name << endl;
    } else {
        cout << "Let's get you signed up " << user_name << endl;
    }

    return 0;
}
