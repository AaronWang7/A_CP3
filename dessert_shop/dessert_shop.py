"""
def main():
Make an instance of order class

Add to your order
"Gummy Bears",.34,1.25
"Candy Corn",2.45,.36
"Chocolate Chip",6, 2.17
"Mint Chocolate Chip",2,1.66
"Cookies and Cream",1,1.52
"Vanilla",2,1.00,"Fudge",0.33
Print out namne of each item
How many items are in the order
"""

import tabulate
from dessert import Candy, Cookie, IceCream, Sundae, Order

class DessertShop:
    
    def user_prompt_candy(self):
        while True:
            name = input("Enter name of candy: ")
            if name.strip():
                break
            print("Name cannot be empty")
        
        while True:
            try:
                weight = float(input("Enter weight (lbs): "))
                if weight > 0:
                    break
                print("Weight must be positive")
            except:
                print("Please enter a valid number")
        
        while True:
            try:
                price = float(input("Enter price per pound: "))
                if price > 0:
                    break
                print("Price must be positive")
            except:
                print("Please enter a valid number")
        
        return Candy(name, weight, price)
    
    def user_prompt_cookie(self):
        while True:
            name = input("Enter name of cookie: ")
            if name.strip():
                break
            print("Name cannot be empty")
        
        while True:
            try:
                quantity = int(input("Enter quantity of cookies: "))
                if quantity > 0:
                    break
                print("Quantity must be positive")
            except:
                print("Please enter a valid number")
        
        while True:
            try:
                price = float(input("Enter price per dozen: "))
                if price > 0:
                    break
                print("Price must be positive")
            except:
                print("Please enter a valid number")
        
        return Cookie(name, quantity, price)
    
    def user_prompt_icecream(self):
        while True:
            name = input("Enter the type of ice cream: ")
            if name.strip():
                break
            print("Name cannot be empty")
        
        while True:
            try:
                scoops = int(input("Enter the number of scoops: "))
                if scoops > 0:
                    break
                print("Scoops must be positive")
            except:
                print("Please enter a valid number")
        
        while True:
            try:
                price = float(input("Enter the price per scoop: "))
                if price > 0:
                    break
                print("Price must be positive")
            except:
                print("Please enter a valid number")
        
        return IceCream(name, scoops, price)
    
    def user_prompt_sundae(self):
        while True:
            name = input("Enter the type of ice cream: ")
            if name.strip():
                break
            print("Name cannot be empty")
        
        while True:
            try:
                scoops = int(input("Enter the number of scoops: "))
                if scoops > 0:
                    break
                print("Scoops must be positive")
            except:
                print("Please enter a valid number")
        
        while True:
            try:
                price = float(input("Enter the price per scoop: "))
                if price > 0:
                    break
                print("Price must be positive")
            except:
                print("Please enter a valid number")
        
        topping_name = input("Enter the topping: ")
        
        while True:
            try:
                topping_price = float(input("Enter the price for the topping: "))
                if topping_price > 0:
                    break
                print("Price must be positive")
            except:
                print("Please enter a valid number")
        
        return Sundae(name, scoops, price, topping_name, topping_price)


def main():
    shop = DessertShop()
    order = Order()
    
    done = False
    prompt = '\n'.join([
        '',
        '1: Candy',
        '2: Cookie', 
        '3: Ice Cream',
        '4: Sundae',
        '',
        'What would you like to add to the order? (1-4, Enter for done): '
    ])
    
    while not done:
        choice = input(prompt)
        if choice == '':
            done = True
        elif choice == '1':
            item = shop.user_prompt_candy()
            order.add(item)
            print(f'{item.name} has been added to your order.')
        elif choice == '2':
            item = shop.user_prompt_cookie()
            order.add(item)
            print(f'{item.name} has been added to your order.')
        elif choice == '3':
            item = shop.user_prompt_icecream()
            order.add(item)
            print(f'{item.name} has been added to your order.')
        elif choice == '4':
            item = shop.user_prompt_sundae()
            order.add(item)
            print(f'{item.name} has been added to your order.')
        else:
            print('Invalid response: Please enter a choice from the menu (1-4) or Enter')
        print()

    # Print receipt using tabulate
    receipt_data = []
    for item in order.order:
        cost = item.calculate_cost()
        tax = item.calculate_tax()
        receipt_data.append([item.name, f"${cost:.2f}", f"${tax:.2f}"])
    
    # Add subtotal, tax, total, and item count rows
    subtotal = order.order_cost()
    total_tax = order.order_tax()
    total_cost = subtotal + total_tax
    
    receipt_data.append(["Subtotal", f"${subtotal:.2f}", ""])
    receipt_data.append(["Tax", f"${total_tax:.2f}", ""])
    receipt_data.append(["Total", f"${total_cost:.2f}", ""])
    receipt_data.append(["Total Items", str(len(order)), ""])
    
    print(tabulate.tabulate(receipt_data, 
                          headers=["Item", "Cost", "Tax"], 
                          tablefmt="simple"))


if __name__ == "__main__":
    main()
