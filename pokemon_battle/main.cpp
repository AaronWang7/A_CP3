// Aw, Pokemon battle
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

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
    string attack1;
    string attack2;
    string attack3;
    int level;
    string type;
};

struct userPokemon {
    string name;
    float maxHP;
    float currentHP;
    string attack1;
    string attack2;
    string attack3;
    int level;
    string type;
};

struct userInventory {
    int commonBalls;
    int smallpotions;
    int largepotions;
    int masterpotions;
};

vector<userPokemon> userPokemons;

float getTypeBonus(string attackerType, string defenderType) {
    if (attackerType == "Water" && defenderType == "Fire") return 1.5;
    if (attackerType == "Fire" && defenderType == "Grass") return 1.5;
    if (attackerType == "Grass" && defenderType == "Water") return 1.5;
    if (attackerType == "Electric" && defenderType == "Water") return 1.5;
    if (attackerType == "Fire" && defenderType == "Ice") return 1.5;
    if (attackerType == "Water" && defenderType == "Rock") return 1.5;
    return 1.0;
}

void battleSystem(userPokemon& playerPokemon, wildPokemon& enemy) {
    cout << "Battle started! " << playerPokemon.name << " vs " << enemy.name << endl;
    
    while (playerPokemon.currentHP > 0 && enemy.currentHP > 0) {
        cout << "\n" << playerPokemon.name << " HP: " << playerPokemon.currentHP << "/" << playerPokemon.maxHP << endl;
        cout << enemy.name << " HP: " << enemy.currentHP << "/" << enemy.maxHP << endl;
        
        cout << "Choose your attack:" << endl;
        cout << "1. " << playerPokemon.attack1 << endl;
        cout << "2. " << playerPokemon.attack2 << endl;
        cout << "3. " << playerPokemon.attack3 << endl;
        cout << "4. Run" << endl;
        cout << "Choose action (1-4): ";
        
        int action;
        cin >> action;
        
        if (action >= 1 && action <= 3) {
            string attackName;
            if (action == 1) attackName = playerPokemon.attack1;
            else if (action == 2) attackName = playerPokemon.attack2;
            else attackName = playerPokemon.attack3;
            
            float baseDamage = 15 + rand() % 20;
            float typeBonus = getTypeBonus(playerPokemon.type, enemy.type);
            float damage = baseDamage * typeBonus;
            
            enemy.currentHP -= damage;
            cout << playerPokemon.name << " used " << attackName << " for " << damage << " damage!";
            if (typeBonus > 1.0) cout << " It's super effective!";
            cout << endl;
            
            if (enemy.currentHP <= 0) {
                cout << enemy.name << " fainted! You won the battle!" << endl;
                break;
            }
            
            string enemyAttack;
            int enemyAction = 1 + rand() % 3;
            if (enemyAction == 1) enemyAttack = enemy.attack1;
            else if (enemyAction == 2) enemyAttack = enemy.attack2;
            else enemyAttack = enemy.attack3;
            
            float enemyBaseDamage = 10 + rand() % 15;
            float enemyTypeBonus = getTypeBonus(enemy.type, playerPokemon.type);
            float enemyDamage = enemyBaseDamage * enemyTypeBonus;
            
            playerPokemon.currentHP -= enemyDamage;
            cout << enemy.name << " used " << enemyAttack << " for " << enemyDamage << " damage!";
            if (enemyTypeBonus > 1.0) cout << " It's super effective!";
            cout << endl;
            
            if (playerPokemon.currentHP <= 0) {
                cout << playerPokemon.name << " fainted! You lost the battle!" << endl;
                break;
            }
        } else if (action == 4) {
            cout << "You ran away from the battle!" << endl;
            break;
        } else {
            cout << "Invalid choice! Try again." << endl;
        }
    }
}

int main() {
    srand(time(0));
    cout << "\nWelcome to the Pokemon Game! To help you start, here is your first Pokemon and 10 common balls." << endl;
    userPokemon firstPokemon = {"Pikachu", 15.0, 15.0, "Thunder Shock", "Quick Attack", "Electro Ball", 1, "Electric"};
    userPokemons.push_back(firstPokemon);
    
    cout << "This is your first Pokemon: " << firstPokemon.name << endl;
    cout << "This is your first ten common ball(Use it to catch Pokemon, it has a low catch rate): " << endl;
    
    userInventory starterPack = {10,20,0,0};

    while (true){
        cout << "\n1: Explore" << endl;
        cout << "2: Battle" << endl;
        cout << "3: Heal Pokemon" << endl;
        cout << "4: Check Inventory" << endl;
        cout << "5: Exit" << endl;
        cout << "Enter your choice (1-5): ";
        
        int choice; 
        cin >> choice; 
        
        if (choice == Action::Explore){
            float my_num = rand() % 101;
            wildPokemon foundpokemon;
            
            if (my_num <= 1){
                foundpokemon = {"Groudon", 700.0, 700.0, "Mud Shot", "Earthquake", "Solar Beam", 70, "Ground"};
            } else if (my_num <= 2) {
                foundpokemon = {"Kyogre", 680.0, 680.0, "Surf", "Hydro Pump", "Ice Beam", 70, "Water"};
            } else if (my_num <= 5) {
                foundpokemon = {"Charizard", 370, 370.0, "Flamethrower", "Dragon Claw", "Air Slash", 55, "Fire"};
            } else if (my_num <= 15) {
                foundpokemon = {"Blastoise", 500.0, 500.0, "Water Gun", "Hydro Pump", "Skull Bash", 55, "Water"};
            } else if (my_num <= 20) {
                foundpokemon = {"Growlithe", 270, 270.0, "Ember", "Bite", "Flame Wheel", 45, "Fire"};
            } else if (my_num <= 25) {
                foundpokemon = {"Dragonite", 230.00, 230.0, "Dragon Claw", "Hurricane", "Hyper Beam", 40, "Dragon"};
            } else if (my_num <= 30) {
                foundpokemon = {"Fighting Wolf", 200.00, 200.0, "Kick", "Bite", "Tackle", 35, "Normal"};
            } else if (my_num <= 35) {
                foundpokemon = {"Pidgeot", 170.00, 170.0, "Wing Attack", "Quick Attack", "Gust", 30, "Flying"};
            } else if (my_num <= 40) {
                foundpokemon = {"Yeti", 270.00, 270.0, "Ice Beam", "Powder Snow", "Aurora Beam", 30, "Ice"};
            } else if (my_num <= 50) {
                foundpokemon = {"Eevee", 70.00, 70.0, "Tackle", "Quick Attack", "Bite", 15, "Normal"};
            } else if (my_num <= 55) {
                foundpokemon = {"Pelipper", 45.00, 45.0, "Water Gun", "Wing Attack", "Surf", 5, "Water"};
            } else if (my_num <= 60) {
                foundpokemon = {"Pikachu", 15.00, 15.0, "Thunder Shock", "Quick Attack", "Electro Ball", 1, "Electric"};
            } else {
                foundpokemon = {"Caterpie", 10.00, 10.0, "Tackle", "String Shot", "Bug Bite", 1, "Bug"};
            }
            
            cout << "You found a wild " << foundpokemon.name << "!" << endl;
            cout << "Would you like to catch it? (Y/N): ";
            char catchPokemon;
            cin >> catchPokemon;
            
            if (catchPokemon == 'y' || catchPokemon == 'Y'){
                if (starterPack.commonBalls > 0){
                    cout << "You used a Common ball." << endl;
                    starterPack.commonBalls -=1;
                    float catchChance = rand() % 101;
                    
                    if (catchChance - foundpokemon.level >= 30.0){
                        cout << "You caught " << foundpokemon.name << "!" <<endl;
                        userPokemon newPokemon = {foundpokemon.name, foundpokemon.maxHP, foundpokemon.maxHP, 
                                                foundpokemon.attack1, foundpokemon.attack2, foundpokemon.attack3, 
                                                foundpokemon.level, foundpokemon.type};
                        userPokemons.push_back(newPokemon);
                    } else {
                        cout << foundpokemon.name << " escaped!\n";
                    }
                } else {
                    cout << "You have no catching balls left! Go battle other pokemon to earn more!" << endl;
                }
            } else {
                cout << "The pokemon escaped!" << endl;
            }
            
        } else if (choice == Action::Inventory){
            cout << "This is your inventory: " << endl;
            cout << "Common balls: " << starterPack.commonBalls << endl;
            cout << "Small potions: " << starterPack.smallpotions << endl;
            cout << "Large potions: " << starterPack.largepotions << endl;
            cout << "Master potions: " << starterPack.masterpotions << endl;
            cout << "Your pokemons:" << endl;
            for (int i = 0; i < userPokemons.size(); i++) {
                cout << i+1 << ". " << userPokemons[i].name << " Level: " << userPokemons[i].level 
                     << " HP: " << userPokemons[i].currentHP << "/" << userPokemons[i].maxHP 
                     << " Type: " << userPokemons[i].type << endl;
            }

        } else if (choice == Action::Battle){
            if (userPokemons.empty()) {
                cout << "You have no Pokemon to battle with!" << endl;
                continue;
            }
            
            cout << "Choose your Pokemon for battle:" << endl;
            for (int i = 0; i < userPokemons.size(); i++) {
                cout << i+1 << ". " << userPokemons[i].name << " (HP: " << userPokemons[i].currentHP 
                     << "/" << userPokemons[i].maxHP << " Type: " << userPokemons[i].type << ")" << endl;
            }
            
            int pokemonChoice;
            cin >> pokemonChoice;
            
            if (pokemonChoice < 1 || pokemonChoice > userPokemons.size()) {
                cout << "Invalid choice!" << endl;
                continue;
            }
            
            userPokemon& battlePokemon = userPokemons[pokemonChoice-1];
            
            if (battlePokemon.currentHP <= 0) {
                cout << "This Pokemon has fainted! Heal it first." << endl;
                continue;
            }
            
            wildPokemon enemyPokemon;
            int enemyType = rand() % 6;
            switch(enemyType) {
                case 0: enemyPokemon = {"Bulbasaur", 45.0, 45.0, "Vine Whip", "Razor Leaf", "Seed Bomb", 5, "Grass"}; break;
                case 1: enemyPokemon = {"Charmander", 39.0, 39.0, "Ember", "Scratch", "Flamethrower", 5, "Fire"}; break;
                case 2: enemyPokemon = {"Squirtle", 44.0, 44.0, "Water Gun", "Bubble", "Hydro Pump", 5, "Water"}; break;
                case 3: enemyPokemon = {"Jigglypuff", 115.0, 115.0, "Sing", "Pound", "Double Slap", 5, "Normal"}; break;
                case 4: enemyPokemon = {"Meowth", 40.0, 40.0, "Scratch", "Bite", "Fury Swipes", 5, "Normal"}; break;
                case 5: enemyPokemon = {"Vulpix", 38.0, 38.0, "Ember", "Quick Attack", "Fire Spin", 5, "Fire"}; break;
            }
            
            battleSystem(battlePokemon, enemyPokemon);
            
        } else if (choice == Action::Heal){
            if (userPokemons.empty()) {
                cout << "You have no Pokemon to heal!" << endl;
                continue;
            }
            
            cout << "Which Pokemon would you like to heal?" << endl;
            for (int i = 0; i < userPokemons.size(); i++) {
                cout << i+1 << ". " << userPokemons[i].name << " (HP: " << userPokemons[i].currentHP << "/" << userPokemons[i].maxHP << ")" << endl;
            }
            
            int pokemonChoice;
            cin >> pokemonChoice;
            
            if (pokemonChoice < 1 || pokemonChoice > userPokemons.size()) {
                cout << "Invalid choice!" << endl;
                continue;
            }
            
            userPokemon& healPokemon = userPokemons[pokemonChoice-1];
            
            cout << "These are the potions you have:" << endl;
            cout << "Small potions: " << starterPack.smallpotions << endl;
            cout << "Large potions: " << starterPack.largepotions << endl;
            cout << "Master potions: " << starterPack.masterpotions << endl;
            cout << "Choose a potion to use(1: Small potion, 2: Large potion, 3: Master potion): ";
            
            int potionChoice;
            cin >> potionChoice;
            
            if (potionChoice == 1){
                if (starterPack.smallpotions > 0 && healPokemon.currentHP < healPokemon.maxHP){
                    healPokemon.currentHP += 10;
                    if (healPokemon.currentHP > healPokemon.maxHP){
                        healPokemon.currentHP = healPokemon.maxHP;
                    }
                    starterPack.smallpotions -= 1;
                    cout << healPokemon.name << " has been healed to " << healPokemon.currentHP << "/" << healPokemon.maxHP << " HP." << endl;
                } else {
                    cout << "You have no small potions left, or your pokemon already has max health" << endl;
                }
            } else if (potionChoice == 2){
                if (starterPack.largepotions > 0 && healPokemon.currentHP < healPokemon.maxHP){
                    healPokemon.currentHP += 50;
                    if (healPokemon.currentHP > healPokemon.maxHP){
                        healPokemon.currentHP = healPokemon.maxHP;
                    }
                    starterPack.largepotions -= 1;
                    cout << healPokemon.name << " has been healed to " << healPokemon.currentHP << "/" << healPokemon.maxHP << " HP." << endl;
                } else {
                    cout << "You have no large potions left, or your pokemon already has max health" << endl;
                }
            } else if (potionChoice == 3){
                if (starterPack.masterpotions > 0 && healPokemon.currentHP < healPokemon.maxHP){
                    healPokemon.currentHP = healPokemon.maxHP;
                    starterPack.masterpotions -= 1;
                    cout << healPokemon.name << " has been healed to " << healPokemon.currentHP << "/" << healPokemon.maxHP << " HP." << endl;
                } else {
                    cout << "You have no Master potions left, or your pokemon already has max health" << endl;
                }
            } else {
                cout << "Not a valid potion choice" << endl;
            }
        
        } else if (choice == Action::Exit){
            cout << "Goodbye!" << endl;
            break;
        } else {
            cout << "Not a valid option!" << endl;
        }
    }
    
    return 0;
}
