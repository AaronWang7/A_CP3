// Arrays Notes
#include <iostream>
#include <limits>           
using namespace std;
string fam[10] = {"Cira", "Eric", "Alex", "Maya", "Liam", "Sophie", "Noah", "Emma", "Lucas", "Olivia"};
string sibs[8] = {"Alex", "Maya", "Liam", "Sophie", "Noah", "Emma", "Lucas", "Olivia"};

int search(string list[],type_t len, string item){
    for(int i = 0; i < len, i++){
        if (list[i] == item){
            cout << "You are a sibling\n";
            return 1;
        }else{
            cout << "You are a parent\n";
        }
}
    return 0;
}
int main(){
    //if (fam == sibs){
        //cout << "Broken\n";
    //}
    for(int i = 0; i < size(fam);i++){
        cout << fam[i] << " LaRose\n";
        //cout << "They are a sibling\n";
        search(sibs, size(sibs),fam[i]);
    }
    // SUZE OF T
    cout << numeric_limits <long long> :: min() << endl;
    cout << numeric_limits <long long> :: max() << endl;
    cout << numeric_limits <size_t> :: min() << endl;
    cout << numeric_limits <size_t> :: max() << endl;
   
   // structured bindings
   auto [q,w,e,r,t,y,u,i,o,p] = fam;
   cout << e << endl;
   

    int matrix[3][3] = {1,2,3,},
    {4,5,6},
    {7,8,9}};


    return 0;
}
