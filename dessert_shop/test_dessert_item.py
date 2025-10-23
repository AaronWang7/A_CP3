"""
Test the DessertItem, Candy, Cookie, IceCream, and Sundae classes
    Test each one on a separate file to see if:
        1. A blank creation of the class will have uyour default vaules.
        2. A vaule can be correctly set for each of the classes.
        3. A vaules in a set created class can be updated.
    Total of 3 test files.
"""
#Import pytest
# Import DessertItem function from dessert
import pytest
from dessert import DessertItem

class TestDessertItem:
    def test_default_values(self):
        #Test DessertItem
        item = DessertItem()
        assert item.name == ""
    
    def test_provided_values(self):
        """Test DessertItem with provided values"""
        item = DessertItem("Test Item")
        assert item.name == "Test Item"
    
    def test_updated_values(self):
        """Test DessertItem attribute updates"""
        item = DessertItem("Original Name")
        item.name = "Updated Name"
        assert item.name == "Updated Name"
