print("Welcome to the Adventure Game!")
health = 100
damage = 10
speed = 5
coin = 100
inventory = []
equipped_item = []
now_lo = "starting island"
listlo = ["starting island", "apple island", "magma island", "tiny island", "twin island",
          "ice island", "dark island", "middle island", "light island", "final island"]

while health > 0:
    print("You are at", now_lo)
    getaction = input(
        "Choose an action: Shop = 1, Move to other islands = 2, Fight = 3, Check Stats = 4, Equip item = 5: ")

    if getaction == "1":
        print("Welcome to our shop! What do you want to buy?")
        shop = input("1 = Wood sword 5 coin, 2 = Wood armor 5 coin, 3 = Wood shoe 3 coin, 4 = Stone sword 10 coin, 5 = Stone armor 10 coin, 6 = Stone shoe 7 coin, 7 = Iron sword 20 coin, 8 = Iron armor 20 coin, 9 = Iron shoe 15 coin， 0 = advanced shop")
        if shop == "0":
            shop2 = input(
                "This is the better shop, 1 = dimond armor 100 coin, 2 = dimond sword 100 coin, 3 = dimond shoe 50 coin, 4 = small heal bottle 1coin. 5 = large heal bottle 50coin:")
            if shop2 == "1" and coin >= 100:
                inventory.append("dimond armor")
                coin = coin - 100
            elif shop2 == "2" and coin >= 100:
                inventory.append("dimond sword")
                coin = coin - 100
            elif shop2 == "3" and coin >= 50:
                inventory.append("dimond shoe")
            elif shop2 == "4" and coin >= 1:
                inventory.append("small heal bottle")
                coin = coin - 1
            elif shop == "5" and coin >= 50:
                inventory.append("large heal bottle")
                coin = coin - 50
        elif shop == "1" and coin >= 5:
            coin = coin - 5
            inventory.append("Wood sword")
        elif shop == "2" and coin >= 5:
            coin = coin - 5
            inventory.append("Wood armor")
        elif shop == "3" and coin >= 3:
            coin = coin - 5
            inventory.append("Wood shoe")
        elif shop == "4" and coin >= 10:
            coin = coin - 10
            inventory.append("Stone sword")
        elif shop == "5" and coin >= 10:
            coin = coin - 10
            inventory.append("Stone armor")
        elif shop == "6" and coin >= 7:
            coin = coin - 7
            inventory.append("Stone shoe")
        elif shop == "7" and coin >= 20:
            coin = coin - 20
            inventory.append("Iron sword")
        elif shop == "8" and coin >= 20:
            coin = coin - 20
            inventory.append("Iron armor")
        elif shop == "9" and coin >= 15:
            coin = coin - 15
            inventory.append("Iron shoe")

    elif getaction == "2":
        print("What island would you want to go to?")
        lo = input("1 = starting island, 2 = apple island, 3 = magma island, 4 = tiny island, 5 = twin island, 6 = ice island, 7 = dark island, 8 = middle island, 9 = light island, 0 = final island: ")

        if lo == "1":
            now_lo = "starting island"
        elif lo == "2":
            now_lo = "apple island"
        elif lo == "3":
            now_lo = "magma island"
        elif lo == "4":
            now_lo = "tiny island"
        elif lo == "5":
            now_lo = "twin island"
        elif lo == "6":
            now_lo = "ice island"
        elif lo == "7":
            now_lo = "dark island"
        elif lo == "8":
            now_lo = "middle island"
        elif lo == "9":
            now_lo = "light island"
        elif lo == "0":
            now_lo = "final island"

    elif getaction == "3":
        print("Ready to fight?")
        if now_lo == "starting island":
            enemy_name = "Goblin"
            enemy_health = 30
            enemy_damage = 5
        elif now_lo == "apple island":
            enemy_name = "Wolf"
            enemy_health = 40
            enemy_damage = 8
        elif now_lo == "magma island":
            enemy_name = "Fire Spirit"
            enemy_health = 50
            enemy_damage = 12
        elif now_lo == "tiny island":
            enemy_name = "Skeleton"
            enemy_health = 30
            enemy_damage = 6
        elif now_lo == "twin island":
            enemy_name = "Bandit"
            enemy_health = 45
            enemy_damage = 10
        elif now_lo == "ice island":
            enemy_name = "Ice Beast"
            enemy_health = 60
            enemy_damage = 15
        elif now_lo == "dark island":
            enemy_name = "Shade"
            enemy_health = 70
            enemy_damage = 18
        elif now_lo == "middle island":
            enemy_name = "Giant"
            enemy_health = 80
            enemy_damage = 20
        elif now_lo == "light island":
            enemy_name = "Angel"
            enemy_health = 50
            enemy_damage = 10
        elif now_lo == "final island":
            enemy_name = "Dragon"
            enemy_health = 200
            enemy_damage = 40

        while enemy_health > 0 and health > 0:
            print(f"Enemy: {enemy_name} | Health: {
                  enemy_health} | Your Health: {health}")
            fight = input("1 = Attack, 2 = Use item, 3 = Dodge: ")

            if fight == "1":
                enemy_health -= damage
                print(f"You attacked! {enemy_name} health: {enemy_health}")
                if enemy_health <= 0:
                    print("You win!")
                    coin += 10
                    break
            elif fight == "2":
                i = input(f"What item do you want to use? You now have {
                          inventory}: ")
                if i in inventory:
                    equipped_item.append(i)
                    print(f"You equipped {i}.")
            elif fight == "3":
                dodge_chance = 0.5
                if dodge_chance > 0.5:
                    print("You dodged the attack!")
                else:
                    print("You failed to dodge!")

            if enemy_health > 0:
                health -= enemy_damage
                print(f"Enemy attacks! Your health: {health}")
                if health <= 0:
                    print("You have been defeated!")

    elif getaction == "4":
        print(f"Health = {health}, Damage = {damage}, Speed = {
              speed}, Coin = {coin}, Inventory = {inventory}")
        print("This is your equipped item:", equipped_item)

    elif getaction == "5":
        ch = input(f"What do you want to equip? You now have {inventory}: ")
        if ch in inventory and ch not in equipped_item:
            equipped_item.append(ch)
            print(f"You equipped {ch}.")
        else:
            print("False. You already equipped this item, you can onlt equip it once")

        if ch == "Wood sword":
            damage = damage + 5
            inventory.remove("Wood sword")
        elif ch == "Wood armor":
            inventory.remove("Wood armor")
            health = health + 5
        elif ch == "Wood shoe":
            inventory.remove("Wood shoe")
            speed = speed + 2
        elif ch == "Stone sword":
            inventory.remove("Stone sword")
            damage = damage + 10
        elif ch == "Stone armor":
            inventory.remove("Stone armor")
            health = health + 10
        elif ch == "Stone shoe":
            inventory.remove("Stone shoe")
            speed = speed + 4
        elif ch == "Iron sword":
            inventory.remove("Iron sword")
            damage = damage + 20
        elif ch == "Iron armor":
            inventory.remove("Iron armor")
            health = health + 20
        elif ch == "Iron shoe":
            inventory.remove("Iron shoe")
            speed += 6
        elif ch == "dimond armor":
            inventory.remove("dimond armor")
            health = health + 70
        elif ch == "dimond sword":
            inventory.remove("dimond sword")
            damage = damage + 50
        elif ch == "dimond shoe":
            inventory.remove("dimond shoe")
            speed = speed + 50
        elif ch == "small heal bottle":
            inventory.remove("small heal bottle")
            health = health + 10
        elif ch == "large heal bottle":
            inventory.remove("Large heal bottle")
            health = health + 25
        print(f"Your new stats - Damage: {damage}, Speed: {speed}")
