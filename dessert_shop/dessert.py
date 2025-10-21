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

# Parent Class
class Dessertitem():
        name: str
        def __init__(self,name = ""):
            self.name = name  
#Child class called Candy
class Candy(Dessertitem):
   price_per_pound: float
   def __init__(self,price_per_pound = 0.0):
        self.price_per_pound = price_per_pound

# Child class called IceCream
class IceCream(Dessertitem):
    price_per_scoop: float
    scoop: int
    def __init__(self,price_per_scoop = 0.0,scoop = 0):
        self.price_per_scoop = price_per_scoop
        self.scoop = scoop

#Child class called Cookie
class Cookie(Dessertitem):
    price_per_dozen: float
    amount_of_cookies: int
    def __init__(self,price_per_dozen = 0.0,amount_of_cookies = 0):
         self.price_per_dozen = price_per_dozen
         self.amount_of_cookies = amount_of_cookies

# Child class called Sundae(Child class of IceCream)
class Sundae(IceCream):
     price_per_scoop: float
     scoop: int
     topping_name: str
     topping_price: float
     def __init__(self,topping_name = "",topping_price = 0.0):
         self.topping_name = topping_name
         self.topping_price = topping_price

#Class called Order(Not child calss)
class Order():
     order: list
     vaule = []
     def __init__(self,order,vaule):
         self.order = order
         self.vaule = vaule
     def __len__():
          












































