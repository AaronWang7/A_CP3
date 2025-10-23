"""
Test the DessertItem, Candy, Cookie, IceCream, and Sundae classes
    Test each one on a separate file to see if:
        1. A blank creation of the class will have uyour default vaules.
        2. A vaule can be correctly set for each of the classes.
        3. A vaules in a set created class can be updated.
    Total of 3 test files.
"""
#Import pytest
# Import DessertItem from dessert
import pytest
from dessert import DessertItem

# Testing

# Default testing
def test_dessert_item_default():
    item = DessertItem()
    assert item.name == ""

# Item povid testing
def test_dessert_item_provided():
    item = DessertItem("Test Item")
    assert item.name == "Test Item"

# Item update testing
def test_dessert_item_updated():
    item = DessertItem("Original")
    item.name = "Updated"
    assert item.name == "Updated"
