# (Holds the classes)
# Dessertitem(parent class)
# name : str
#       ""
#   __init__method

# new calss(child class) : Candy
#   price_per_pound: float
#       0.0
#   amount: float
# 0.0
#   __init__

# iceCream
#   price_per_scoop: float
# 0.0
# scoops: int
# 0

# Cookies
# price_per_dozen: float
# 0.0
# amount_of_cookies: int
# 0

# Sundae(child class of IceCream)
# inherits(price per scoop and scoops)
# toping_name: str
# ""
# topping_price:float
# 0.0
# Order(Not child class)
# order[]
# add(DessertItem)
# __len__()Gets the # of items in the order

# Code Start

class DessertItem:

    # Parent class for dessert items
    def __init__(self, name="", tax_percent=7.25):
        self.name = name
        self.tax_percent = tax_percent

    def calculate_cost(self):
        # This will be overridden in child classes
        return 0.0

    def calculate_tax(self):
        cost = self.calculate_cost()
        tax = cost * (self.tax_percent / 100)
        return round(tax, 2)


class Candy(DessertItem):
    # Candy class child class of DessertItem

    def __init__(self, name="", candy_weight=0.0, price_per_pound=0.0):
        super().__init__(name)
        self.candy_weight = candy_weight
        self.price_per_pound = price_per_pound

    def calculate_cost(self):
        cost = self.candy_weight * self.price_per_pound
        return round(cost, 2)


class Cookie(DessertItem):
    # Cookie class child class of DessertItem

    def __init__(self, name="", cookie_quantity=0, price_per_dozen=0.0):
        super().__init__(name)
        self.cookie_quantity = cookie_quantity
        self.price_per_dozen = price_per_dozen

    def calculate_cost(self):
        dozens = self.cookie_quantity / 12
        cost = dozens * self.price_per_dozen
        return round(cost, 2)


class IceCream(DessertItem):
    # IceCream class child class of DessertItem

    def __init__(self, name="", scoop_count=0, price_per_scoop=0.0):
        super().__init__(name)
        self.scoop_count = scoop_count
        self.price_per_scoop = price_per_scoop

    def calculate_cost(self):
        cost = self.scoop_count * self.price_per_scoop
        return round(cost, 2)


class Sundae(IceCream):
    # Sundae class child class of IceCream

    def __init__(self, name="", scoop_count=0, price_per_scoop=0.0, topping_name="", topping_price=0.0):
        super().__init__(name, scoop_count, price_per_scoop)
        self.topping_name = topping_name
        self.topping_price = topping_price

    def calculate_cost(self):
        ice_cream_cost = self.scoop_count * self.price_per_scoop
        total_cost = ice_cream_cost + self.topping_price
        return round(total_cost, 2)


class Order:
    # Order class to keep track of dessert items

    def __init__(self):
        self.order = []

    def add(self, item):
        # Add a dessert item to the order
        self.order.append(item)

    def __len__(self):
        # Return the number of items in the order
        return len(self.order)

    def order_cost(self):
        total = 0.0
        for item in self.order:
            total += item.calculate_cost()
        return round(total, 2)

    def order_tax(self):
        total_tax = 0.0
        for item in self.order:
            total_tax += item.calculate_tax()
        return round(total_tax, 2)
