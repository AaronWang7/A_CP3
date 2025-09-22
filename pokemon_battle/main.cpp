// pokemon_battle AW

#include <iostream>
#include <string>
#include <ctime>


using namespace std;
enum Action{
    Explore = 1, 
    Battle = 2,
    Heal = 3,
    Exit = 4,
};

struct wildPokemon {
    string name;
    float maxHP;
    float currentHP;
    string attacks;
    int level;
    string type;
};

struct userPokemon {
    string name;
    float maxHP;
    float currentHP;
    string attacks;
    int level;

};

int main() {
    cout << "Welcome to the Pokemon Game! To help you start, here is your first Pokemon!" << endl;
    userPokemon firstPokemon = {"Pikachu", 10.0, 10.0, "Thunder Shock", 5};
    cout << 
    "1: Explore" << endl <<
    "2: Battle" << endl <<
    "3: Heal Pokemon" << endl <<
    "4: Exit" << endl;

    cout << "Enter your choice (1-4): ";
    int choice;
    cin >> choice;
    
    if (choice == Action::Explore){
        int seconds = time(nullptr);
        srand(seconds);
        float my_num = rand() % 101;
        if (my_num <= 0.10) {
            wildPokemon foundpokemon = {"Groudon", 700.0, 700.0, "Mud Shot", 70, "Ground"};
       
        }else if (my_num <= 0.30) {
            wildPokemon foundpokemon = {"Kyogre", 680.0, 680.0, "Surf", 70, "Water"};
        
        }else if (my_num <= 5) {
            wildPokemon foundpokemon = {"Charizard", 370, 370.0, "Fire ball", 55, "Fire"};
        }else if (my_num <= 15) {
            wildPokemon foundpokemon = {"Blastoise", 500.0, 500.0, "Water Gun", 55, "Water"};
        }else if (my_num <= 20) {
            wildPokemon foundpokemon = {"Growilthe", 270, 270.0, "Fire ball", 45, "Fire"};
        }else if (my_num <= 25) {
            wildPokemon foundpokemon = {"", 230.00, 230.0, "Dragon Claw", 40, "Dragon"};
        
            

        };
       
    }else if (choice == Action::Exit){
            cout << "Goodbye!" << endl;
     
     }else{
        cout << "Not a option!"<< endl;
    }



    return 0;
}  

































/*INSTRUCTIONS:
Write a program that creates a Pokémon battle game using structures for Pokémon and enumeration for the menu in C++. The game should allow users to explore (find Pokémon), battle, heal Pokémon, and exit the game. Implement structures for Pokémon that include names, max HP, attacks, and level. Use enumeration for the main menu options.

The game must include the following features:

A main menu with options to explore, battle, heal, and exit.
Exploration feature to find and catch Pokémon.
Battle system where users can fight against wild Pokémon or other trainers.
Healing option to restore Pokémon HP.
Multiple attack options for each Pokémon during battles.
Different Pokémon types with associated weaknesses and strengths.
Type-based damage bonuses during battles.
OUTPUT EXAMPLE:

Pokémon Battle Game Menu:

Explore
Battle
Heal Pokémon
Exit
Enter your choice (1-4): 1

You found a wild Pikachu! Do you want to catch it? (Y/N): Y

Pikachu has been added to your team!

KEY REMINDERS:
Use structures to define Pokémon with properties like name, max HP, current HP, attacks, level, and type.
Implement enumeration for the main menu options.
Create multiple attack options for each Pokémon.
Implement a type system with weaknesses and strengths (e.g., Water is strong against Fire).
Use appropriate variable types and error handling.
Ensure the game continues running until the user chooses to exit.
Implement proper input validation and error handling.
BONUS (Rubber Duck Prize):

To earn a rubber duck prize, include multiple attack options that users can select during battle, and implement a comprehensive type system with proper weaknesses and strengths that provide damage bonuses.

*/