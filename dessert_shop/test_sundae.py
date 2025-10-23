# Import Pytest
import pytest

# Import Sundae from dessert
from dessert import Sundae

#Testing

# default testing
def test_sundae_default():
    sundae = Sundae()
    assert sundae.name == ""
    assert sundae.scoop_count == 0
    assert sundae.price_per_scoop == 0.0
    assert sundae.topping_name == ""
    assert sundae.topping_price == 0.0

#provid testing
def test_sundae_provided():
    sundae = Sundae("Strawberry", 2, 1.25, "Sprinkles", 0.75)
    assert sundae.name == "Strawberry"
    assert sundae.scoop_count == 2
    assert sundae.price_per_scoop == 1.25
    assert sundae.topping_name == "Sprinkles"
    assert sundae.topping_price == 0.75

# Update tetsing
def test_sundae_updated():
    sundae = Sundae("Original", 1, 1.00, "Nuts", 0.50)
    sundae.name = "Updated Sundae"
    sundae.scoop_count = 3
    sundae.price_per_scoop = 1.50
    sundae.topping_name = "Caramel"
    sundae.topping_price = 0.75
    assert sundae.name == "Updated Sundae"
    assert sundae.scoop_count == 3
    assert sundae.price_per_scoop == 1.50
    assert sundae.topping_name == "Caramel"
    assert sundae.topping_price == 0.75
