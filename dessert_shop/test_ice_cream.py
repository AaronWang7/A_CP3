#Import Pytest
import pytest
# Imprt IceCream from dessert
from dessert import IceCream

# Testing

# default testing
def test_ice_cream_default():
    ice_cream = IceCream()
    assert ice_cream.name == ""
    assert ice_cream.scoop_count == 0
    assert ice_cream.price_per_scoop == 0.0

# Provid testing
def test_ice_cream_provided():
    ice_cream = IceCream("Chocolate", 3, 1.50)
    assert ice_cream.name == "Chocolate"
    assert ice_cream.scoop_count == 3
    assert ice_cream.price_per_scoop == 1.50

# Update testing
def test_ice_cream_updated():
    ice_cream = IceCream("Original", 2, 1.25)
    ice_cream.name = "Updated Ice Cream"
    ice_cream.scoop_count = 4
    ice_cream.price_per_scoop = 1.75
    assert ice_cream.name == "Updated Ice Cream"
    assert ice_cream.scoop_count == 4
    assert ice_cream.price_per_scoop == 1.75
