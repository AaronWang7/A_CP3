// Arrays Notes

#include <iostream>
using namespace std;
string fam[10] = {"Cira", "Eric", "Alex", "Maya", "Liam", "Sophie", "Noah", "Emma", "Lucas", "Olivia"};
string sibs[8] = {"Alex", "Maya", "Liam", "Sophie", "Noah", "Emma", "Lucas", "Olivia"};

void search(string list, string item){


    cout << list << endl;
}
int main(){
    if (fam == sibs){
        cout << "Broken\n";
    }
    for(int i = 0; i < size(fam);i++){
        cout << fam[i] << " LaRose\n";
    if (fam[i] == sibs[i-2]){
        cout << "They are a sibling\n";
    }
    else{
        cout << "Not a sibling\n";
    }
}

    return 0;
}
