// pokemon_battle AW

#include <iostream>
#include <string>
#include <ctime>
#include <limits>


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
    int smallpotions;
    int largepotions;
    int masterpotions;
};

int main() {
    cout << "\nWelcome to the Pokemon Game! To help you start, here is your first Pokemon and 10 common balls." << endl;
    userPokemon firstPokemon = {"Pikachu", 15.0, 15.0, "Thunder Shock", 1};
    userPokemon currentPokemon = {"", 0.0, 0.0, "", 0};
    cout << "This is your first Pokemon: " << firstPokemon.name << endl;
    cout << "This is your first ten common ball(Use it to catch Pokemon, it has a low catch rate): " << endl;
    cout << "From the Highest catch rate to lowest: Master Ball, Ultra Ball, Great Ball, Common Ball" << endl;
    userInventory starterPack = {10,20,0,0};
    while (true){
        cout <<
        "1: Explore" << endl <<
        "2: Battle" << endl <<
        "3: Heal Pokemon" << endl <<
        "4: Check Inventory" << endl <<
        "5: Exit" << endl;

        cout << "Enter your choice (1-5): ";
        int choice; 
        cin >> choice; 
        if (choice == Action::Explore){
            float my_num = rand() % 101;
            cout << my_num << endl;
            if (my_num <= 1){
                wildPokemon foundpokemon = {"Groudon", 700.0, 700.0, "Mud Shot", 70, "Ground"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
                    
                
                cout << "This is your catch number" << catchNumber << endl;
                catchChance = catchNumber;
            
            
            }else if (my_num <= 2) {
                wildPokemon foundpokemon = {"Kyogre", 680.0, 680.0, "Surf", 70 , "Water"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
            }else if (my_num <= 5) {
                wildPokemon foundpokemon = {"Charizard", 370, 370.0, "Fire ball", 55, "Fire"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
            }else if (my_num <= 15) {
                wildPokemon foundpokemon = {"Blastoise", 500.0, 500.0, "Water Gun", 55, "Water"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
            }else if (my_num <= 20) {
                wildPokemon foundpokemon = {"Growilthe", 270, 270.0, "Fire ball", 45, "Fire"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
            }else if (my_num <= 25) {
                wildPokemon foundpokemon = {"Dragonite", 230.00, 230.0, "Dragon Claw", 40, "Dragon"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
            }else if (my_num <= 30) {
                wildPokemon foundpokemon = {"Fighting Wolf", 200.00, 200.0, "Kick", 35, "Common"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
            }else if (my_num <= 35) {
                wildPokemon foundpokemon = {"Fighting bird", 170.00, 170.0, "Feather attack", 30, "Flying"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
            }else if (my_num <= 40) {
                wildPokemon foundpokemon = {"Yeti", 270.00, 270.0, "Ice Age", 30, "Ice"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
            }else if (my_num <= 50) {
                wildPokemon foundpokemon = {"Eevee", 70.00, 70.0, "Kick", 15, "Normal"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
            }else if (my_num <= 50) {
                wildPokemon foundpokemon = {"Flying boat", 45.00, 45.0, "Boat attack", 5, "flying"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
            }else if (my_num <= 55) {
                wildPokemon foundpokemon = {"Pikachu", 15.00, 15.0, "Thunder Shock", 1, "Electric"};
                cout << "You found a wild " << foundpokemon.name;
            }else {
                wildPokemon foundpokemon = {"Caterpie", 10.00, 10.0, "Tackle", 1, "Bug"};
                cout << "You found a wild " << foundpokemon.name;
                cout << "Would you like to catch it? (Y/N): ";
                char catchPokemon;
                float catchNumber =  rand() % 101;
                float catchChance = catchNumber;
                cin >> catchPokemon;
                
                int commonBall = 1;
                
                if (catchPokemon == 'y' || "Y"){
                    if (starterPack.commonBalls > 0){
                        cout << "You used a Common ball." << endl;
                        starterPack.commonBalls -=1;
                        if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught" << foundpokemon.name << "!" <<endl;
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                        userPokemon currentPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.currentHP, foundpokemon.attacks, foundpokemon.level};
                    }else{
                        cout << foundpokemon.name << "Escaped!\n";
                        cout << catchChance << endl;
                        cout << foundpokemon.level << endl;
                    }

                    }else{
                        cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                    }
                
                }else if (catchPokemon == 'n' || "N"){
                        cout << "The pokemon escaped, You did not choose to catch it!: " << foundpokemon.name << "had escaped" << endl;
                        continue;
                    
                }
            }
        }else if (choice == Action:: Inventory){
                cout << "This is your inventory: " << endl;
                cout << "Common balls:" << starterPack.commonBalls << endl;
                cout << "Small potions:" << starterPack.smallpotions << endl;
                cout << "Large potions:" << starterPack.largepotions << endl;
                cout << "Master potions:" << starterPack.masterpotions << endl;
                cout << "Your pokemons:" << firstPokemon.name << " Level: " << firstPokemon.level << " HP: " << firstPokemon.currentHP << "/" << firstPokemon.maxHP << endl;
                cout << currentPokemon.name << " Level: " << currentPokemon.level << " HP: " << currentPokemon.currentHP << "/" << currentPokemon.maxHP << endl;


        }else if (choice == Action:: Battle){
            cout << "Ready to battle!" << endl;


            // list of all pokemon to find names: "Pikachu", "Bulbasaur", "Charmander", "Squirtle", "Eevee", "Jigglypuff", "Meowth", "Psyduck", "Snorlax", "Magikarp"


        }else if (choice == Action:: Heal){
            cout << "Which one would you like to heal?:" << endl;
            cout << "You have these pokemons:" << firstPokemon.name << " Level: " << firstPokemon.level << " HP: " << firstPokemon.currentHP << "/" << firstPokemon.maxHP << endl;
            string pokemonChoice;
            cin >> pokemonChoice;
            if (pokemonChoice == firstPokemon.name){
                cout << "These are the potions you have:" << endl;
                cout << "Small potions:" << starterPack.smallpotions << endl;
                cout << "Large potions:" << starterPack.largepotions << endl;
                cout << "Master potions:" << starterPack.masterpotions << endl;
                cout << "Choose a potion to use(1: Small potion, 2: Large potion, 3: Master potion): ";
                int potionChoice;
                cin >> potionChoice;
                if (potionChoice == 1){
                    if (starterPack.smallpotions > 0 && firstPokemon.currentHP < firstPokemon.maxHP){
                        firstPokemon.currentHP += 10;
                        if (firstPokemon.currentHP > firstPokemon.maxHP){
                            firstPokemon.currentHP = firstPokemon.maxHP;
                        }
                        starterPack.smallpotions -= 1;
                        cout << firstPokemon.name << " has been healed to " << firstPokemon.currentHP << "/" << firstPokemon.maxHP << " HP." << endl;
                    }else{
                        cout << "You have no small potions left, or your pokeon already have max health" << endl;
                        continue;
                    }
                
            }else if (potionChoice == 2){
                if (starterPack.largepotions > 0 && firstPokemon.currentHP < firstPokemon.maxHP){
                    firstPokemon.currentHP += 50;
                    if (firstPokemon.currentHP > firstPokemon.maxHP){
                        firstPokemon.currentHP = firstPokemon.maxHP;
                    }
                    starterPack.largepotions -= 1;
                    cout << firstPokemon.name << " has been healed to " << firstPokemon.currentHP << "/" << firstPokemon.maxHP << " HP." << endl;
                }else{
                    cout << "You have no large potions left, or your pokemon already have max health" << endl;
                    continue;
                }
            }else if (potionChoice == 3){
                if (starterPack.masterpotions > 0 && firstPokemon.currentHP < firstPokemon.maxHP){
                    firstPokemon.currentHP = firstPokemon.maxHP;
                    starterPack.masterpotions -= 1;
                    cout << firstPokemon.name << " has been healed to " << firstPokemon.currentHP << "/" << firstPokemon.maxHP << " HP." << endl;
                }else{
                    cout << "You have no Master potions left, or your pokemon already have max health" << endl;
                    continue;
                }
            }else{
                cout << "Not a potion choice (eneter number 1 - 3)" << endl;
                continue;
            }
        }else{
            cout << "The pokemon does not exists in your inventory" << endl;
            continue;
        }


                

        
        
        }else if (choice == Action::Exit){
                cout << "Goodbye!" << endl;
                break;
        
        }else{
            cout << "Not a option!"<< endl;
            // why it keeps printing not a option? : because the enum is not being used correctly, it should be Action::Explore, Action::Battle, Action::Heal, Action::Exit to fix it I need to change the if statements to use the enum values correctly. example: if (choice == Action::Explore) are all of them done right?
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