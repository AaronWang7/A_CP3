import tabulate
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

# Import Candy, Cookie, IceCream, Sundae, Order from dessert
from dessert import Candy, Cookie, IceCream, Sundae, Order

while True:
    def main():
        item_add = input("What Item would you like to add to the order?:\n")
        item_weight = input("Enter weight(lbs)")
        price_per_weight = input("Enter")

        order = Order()

        # Add items to the order
        order.add(Candy("Candy Corn", 1.5, 0.25))
        order.add(Candy("Gummy Bears", 0.25, 0.35))
        order.add(Cookie("Chocolate Chip", 6, 3.99))
        order.add(IceCream("Pistachio", 2, 0.79))
        order.add(Sundae("Vanilla", 3, 0.69, "Hot Fudge", 1.29))
        order.add(Cookie("Oatmeal Raisin", 2, 3.45))

        # Print out the name of each DessertItem in the order
        for item in order.order:
            print(item.name)

        # Print out the total number of items in the order
        print(f"Total number of items in order: {len(order)}")
        print(f"Total cost of items in order: ")

    if __name__ == "__main__":
        main()


def main():
    shop = DessertShop()
    order = Order()
    '''
    order.add(Candy('Candy Corn', 1.5, 0.25))
    order.add(Candy('Gummy Bears', 0.25, 0.35))
    order.add(Cookie('Chocolate Chip', 6, 3.99))
    order.add(IceCream('Pistachio', 2, 0.79))
    order.add(Sundae('Vanilla', 3, 0.69, 'Hot Fudge', 1.29))
    order.add(Cookie('Oatmeal Raisin', 2, 3.45))
    '''
    done: bool = False
    # build the prompt string once
    prompt = '\n'.join(['\n',
    '1: Candy',
    '2: Cookie',
    '3: Ice Cream',
    '4: Sundae',
    '\nWhat would you like to add to the order? (1-4, Enter for done): '
    ])
    while not done:
    choice = input(prompt)
    match choice:
    case '':
    done = True
    case '1':
    item = shop.user_prompt_candy()
    order.add(item)
    print(f'{item.name} has been added to your order.')
    case '2':
    item = shop.user_prompt_cookie()
    order.add(item)
    print(f'{item.name} has been added to your order.')
    case '3':
    item = shop.user_prompt_icecream()
    order.add(item)
    print(f'{item.name} has been added to your order.')
    case '4':
    item = shop.user_prompt_sundae()
    order.add(item)
    print(f'{item.name} has been added to your order.')
    case _:
    print('Invalid response: Please enter a choice from the menu (1-4) or
    Enter')
print()
#
# Add your code below here to print the receipt as the last thing in main()
# Make sure that the output format matches the provided sample run