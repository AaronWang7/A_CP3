#(Holds the classes)
#Dessertitem(parent class)
    #name : str
#       ""
#   __init__method

#new calss(child class) : Candy
#   price_per_pound: float
#       0.0
#   amount: float
        #0.0
#   __init__

# iceCream
#   price_per_scoop: float
        #0.0
    #scoops: int
        # 0

#Cookies 
    #price_per_dozen: float
        #0.0
    #amount_of_cookies: int
        #0

#Sundae(child class of IceCream)
    #inherits(price per scoop and scoops)
    #toping_name: str
        #""
    #topping_price:float
        #0.0
# Order(Not child class)
    #order[]
    #add(DessertItem)
    #__len__()Gets the # of items in the order

# Code Start

class DessertItem:
    """Parent class for all dessert items"""
    
    def __init__(self, name=""):
        self.name = name

class Candy(DessertItem):
    """Candy class - inherits from DessertItem"""
    
    def __init__(self, name="", candy_weight=0.0, price_per_pound=0.0):
        super().__init__(name)
        self.candy_weight = candy_weight
        self.price_per_pound = price_per_pound

class Cookie(DessertItem):
    """Cookie class - inherits from DessertItem"""
    
    def __init__(self, name="", cookie_quantity=0, price_per_dozen=0.0):
        super().__init__(name)
        self.cookie_quantity = cookie_quantity
        self.price_per_dozen = price_per_dozen

class IceCream(DessertItem):
    """IceCream class - inherits from DessertItem"""
    
    def __init__(self, name="", scoop_count=0, price_per_scoop=0.0):
        super().__init__(name)
        self.scoop_count = scoop_count
        self.price_per_scoop = price_per_scoop

class Sundae(IceCream):
    """Sundae class - inherits from IceCream"""
    
    def __init__(self, name="", scoop_count=0, price_per_scoop=0.0, topping_name="", topping_price=0.0):
        super().__init__(name, scoop_count, price_per_scoop)
        self.topping_name = topping_name
        self.topping_price = topping_price

class Order:
    """Order class to keep track of dessert items"""
    
    def __init__(self):
        self.order = []
    
    def add(self, item):
        """Add a dessert item to the order"""
        self.order.append(item)
    
    def __len__(self):
        """Return the number of items in the order"""
        return len(self.order)




































