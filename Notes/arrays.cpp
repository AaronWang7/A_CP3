// Arrays Notes
#include <iostream>
#include <limits>           
using namespace std;
# include <array>
//string fam[10] = {"Cira", "Eric", "Alex", "Maya", "Liam", "Sophie", "Noah", "Emma", "Lucas", "Olivia"};
//string sibs[8] = {"Alex", "Maya", "Liam", "Sophie", "Noah", "Emma", "Lucas", "Olivia"};
int nums[50] = {5,4,1,3,8,2,7,6,0,9,22,11,33,55,44,66,88,77,99,10,32,12,14,16,18,15,13,17,19,20,34,36,38,35,37,39,40,42,41,43,45,47,46,48,49,50};
/*
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
*/

int main(){
    /*
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
   */
  
   // rows and columns
   //multi-dimensional array
    //int matrix[3][3] = {1,2,3,},
    //{4,5,6},
    //{7,8,9};
    int len = size(nums);
    for (int j = 0; j < len; j++){
        for (int i = 1; i < (len - 1) ; i++){     
            cout << nums[i] << endl;
            if(nums[i] < nums[i - 1]){
                //swap(nums[i] nums[i + 1]);
                    //cout << nums;
                int swap = nums[i]; 
                nums[i] = nums[i-1];
                nums[i-1] = swap;

            }
        }

    }

    for (int i = 0; i < len; i++){
        cout << nums[i] << ",";
}
    return 0;

}
/*
How are for loops constructed in C++: 
When do you need to use curly brackets in C++:
How do you compare items in arrays:
How do you use an array as an argument in a function:
What is type_t:
Why would we use type_t:
How do you search an array:
How do you sort an array:
How do you make a multi-dimensional array: 
*/











