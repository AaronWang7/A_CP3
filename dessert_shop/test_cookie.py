# Import Pytest
import pytest

# Import Cookie function from dessert
from dessert import Cookie

#Testing

#Default testing
def test_cookie_default():
    cookie = Cookie()
    assert cookie.name == ""
    assert cookie.cookie_quantity == 0
    assert cookie.price_per_dozen == 0.0

# Provid testing
def test_cookie_provided():
    cookie = Cookie("Sugar Cookie", 12, 5.99)
    assert cookie.name == "Sugar Cookie"
    assert cookie.cookie_quantity == 12
    assert cookie.price_per_dozen == 5.99

# Update testing
def test_cookie_updated():
    cookie = Cookie("Original", 6, 4.99)
    cookie.name = "Updated Cookie"
    cookie.cookie_quantity = 24
    cookie.price_per_dozen = 6.99
    assert cookie.name == "Updated Cookie"
    assert cookie.cookie_quantity == 24
    assert cookie.price_per_dozen == 6.99
