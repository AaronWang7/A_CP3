// Aw User login

#include <iostream>
using namespace std;

int main(){
    string user_name = "";
    string user_login[5] = {"Tom","Aaron","Jack767","apple989","pie981"};
    string admin_login[2] = {"kol999","slsj918"};
    cout << "Enter in your user name:";
    cin >> user_name;
    // check if user is in user_login array
    int len_user = size(user_login);
    int len_admin = size(admin_login);
    for (int i = 0; i < len_user; i++){
        if (user_name == user_login[i]){
            cout << "Welcome back " << user_login[i] <<endl;
        } else if (user_name == admin_login[i]){
            cout << "Welcome admin " << admin_login[i] << endl;
            {

            }
        }

    return 0;
    
}