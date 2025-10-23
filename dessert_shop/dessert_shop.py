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

def main():
    # Create a new order
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

if __name__ == "__main__":
    main()
