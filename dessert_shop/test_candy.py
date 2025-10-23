#Import pytest
#Import Candy from dessert
import pytest
from dessert import Candy

#Testing

# Candy defaylt
def test_candy_default():
    candy = Candy()
    assert candy.name == ""
    assert candy.candy_weight == 0.0
    assert candy.price_per_pound == 0.0
# Candy provide
def test_candy_provided():
    candy = Candy("Chocolate", 2.5, 3.99)
    assert candy.name == "Chocolate"
    assert candy.candy_weight == 2.5
    assert candy.price_per_pound == 3.99
# Candy update
def test_candy_updated():
    candy = Candy("Original", 1.0, 2.0)
    candy.name = "New Candy"
    candy.candy_weight = 3.0
    candy.price_per_pound = 4.0
    assert candy.name == "New Candy"
    assert candy.candy_weight == 3.0
    assert candy.price_per_pound == 4.0
