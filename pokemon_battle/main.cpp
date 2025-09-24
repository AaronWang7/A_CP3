// pokemon_battle AW

#include <iostream>
#include <string>
#include <ctime>


using namespace std;
enum Action{
    Explore = 1, 
    Battle = 2,
    Heal = 3,
    Inventory = 4,
    Exit = 5,
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

struct userInventory {
    int commonBalls;
    int greatBalls;
    int ultraBalls;
    int masterBalls;
    int smallpotions;
    int largepotions;
    int masterpotions;
};

int main() {
    cout << "\nWelcome to the Pokemon Game! To help you start, here is your first Pokemon and 10 common balls." << endl;
    userPokemon firstPokemon = {"Pikachu", 15.0, 15.0, "Thunder Shock", 1};
    cout << "This is your first Pokemon: " << firstPokemon.name << endl;
    cout << "This is your first ten common ball(Use it to catch Pokemon, it has a low catch rate): " << endl;
    cout << "From the Highest catch rate to lowest: Master Ball, Ultra Ball, Great Ball, Common Ball" << endl;
    userInventory starterPack = {10,0,0,0,5,0,0};
    while (true){
    cout <<
    "1: Explore" << endl <<
    "2: Battle" << endl <<
    "3: Heal Pokemon" << endl <<
    "4: Check Inventory" << endl <<
    "5: Exit" << endl;

    cout << "Enter your choice (1-4): ";
    int choice;
    cin >> choice;
    
    if (choice == Action::Explore){
        float my_num = rand() % 101;
        cout << my_num << endl;
        if (my_num <= 100) {
            wildPokemon foundpokemon = {"Groudon", 700.0, 700.0, "Mud Shot", 70, "Ground"};
            cout << "You found a wild " << foundpokemon.name;
            cout << "Would you like to catch it? (Y/N): ";
            char catchPokemon;
            float catchNumber =  rand() % 101;
            float catchChance = catchNumber;
            cin >> catchPokemon;
            
            int catchRate = 1;
            int normalBall = 1;
            int greatBall = 2;
            int ultraBall = 5;
            int masterBall = 100;

            
            if (catchPokemon == 'y' || "Y"){
                if (starterPack.commonBalls > 0){
                    catchRate = normalBall;
                    cout << "You used a common ball." << endl;
                }else if (starterPack.greatBalls > 0){
                    catchRate = greatBall;
                }else if (starterPack.ultraBalls > 0){
                    catchRate = ultraBall;
                }else if (starterPack.masterBalls > 0){
                    catchRate = masterBall;
                }
                //why is the catch rate not working?: 

                
                cout << "This is your catch number" << catchNumber << endl;
                float catchChance = catchNumber;

                }
                if (catchChance - foundpokemon.level >= 30.0){
                    cout << "You caught" << foundpokemon.name << "!" <<endl;
                    cout << catchChance << endl;
                    cout << catchRate << endl;
                    cout << foundpokemon.level << endl;
                    userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                }else{
                    cout << foundpokemon.name << "Escaped!\n";
                    cout << catchChance << endl;
                    cout << catchRate << endl;
                    cout << foundpokemon.level << endl;
                }
        }else if (my_num <= 2) {
            wildPokemon foundpokemon = {"Kyogre", 680.0, 680.0, "Surf", 70 , "Water"};
            cout << "You found a wild " << foundpokemon.name;
        }else if (my_num <= 5) {
            wildPokemon foundpokemon = {"Charizard", 370, 370.0, "Fire ball", 55, "Fire"};
            cout << "You found a wild " << foundpokemon.name;
        }else if (my_num <= 15) {
            wildPokemon foundpokemon = {"Blastoise", 500.0, 500.0, "Water Gun", 55, "Water"};
            cout << "You found a wild " << foundpokemon.name;
        }else if (my_num <= 20) {
            wildPokemon foundpokemon = {"Growilthe", 270, 270.0, "Fire ball", 45, "Fire"};
            cout << "You found a wild " << foundpokemon.name;
        }else if (my_num <= 25) {
            wildPokemon foundpokemon = {"Dragonite", 230.00, 230.0, "Dragon Claw", 40, "Dragon"};
            cout << "You found a wild " << foundpokemon.name;
        }else if (my_num <= 30) {
            wildPokemon foundpokemon = {"Fighting Wolf", 200.00, 200.0, "Kick", 35, "Common"};
            cout << "You found a wild " << foundpokemon.name;
        }else if (my_num <= 35) {
            wildPokemon foundpokemon = {"Fighting bird", 170.00, 170.0, "Feather attack", 30, "Flying"};
            cout << "You found a wild " << foundpokemon.name;
        }else if (my_num <= 40) {
            wildPokemon foundpokemon = {"Yeti", 270.00, 270.0, "Ice Age", 30, "Ice"};
             cout << "You found a wild " << foundpokemon.name;
        }else if (my_num <= 50) {
            wildPokemon foundpokemon = {"Eevee", 70.00, 70.0, "Kick", 15, "Normal"};
            cout << "You found a wild " << foundpokemon.name;
        }else if (my_num <= 50) {
            wildPokemon foundpokemon = {"Flying boat", 45.00, 45.0, "Boat attack", 5, "flying"};
            cout << "You found a wild " << foundpokemon.name;
        }else if (my_num <= 55) {
            wildPokemon foundpokemon = {"Pikachu", 15.00, 15.0, "Thunder Shock", 1, "Electric"};
            cout << "You found a wild " << foundpokemon.name;
        }else {
            wildPokemon foundpokemon = {"Caterpie", 10.00, 10.0, "Tackle", 1, "Bug"};
             cout << "You found a wild " << foundpokemon.name;

        }


        // list of all pokemon to find names: "Pikachu", "Bulbasaur", "Charmander", "Squirtle", "Eevee", "Jigglypuff", "Meowth", "Psyduck", "Snorlax", "Magikarp"


            
            

    
       
    }else if (choice == Action::Exit){
            cout << "Goodbye!" << endl;
     
     }else{
        cout << "Not a option!"<< endl;
    };


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