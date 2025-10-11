class person:
    """Person class wiht first and last names as well as age. 
    Method to get full name, increase age by 1"""
    first_name: str
    last_namez: str
    age: int
    def __init__(self, _first_name = "John", last_name = "Doe", age = 0):
        """Sets all vaules"""
        self._first_name = _first_name
        self.last_name = last_name
        self.age = age

    def setAge(self) -> str: # setter method
        """Increase age by 1"""
        self.age += 1
    
    def full(self): # getter method
        """Create full name"""
        return self._first_name + " " + self.last_name
    
    def __str__(self):
        return f"Name: {self._first_name}\nLast Name: {self.last_name}\nAge: {self.age}"
        



tia = person("Tia","LaRose", 28)
alex = person("Alex","LaRose", 37)
john = person()
tia.setAge()

print(f"{tia.full()} Age: {tia.age}")
print(f"{alex.full()} Age: {alex.age}")
print(tia)

#print(john.age)
#print(john.first_name)
#print(john.last_name)










































"""
What is a class? zoomed out version of the thing that the class repsent
What is an object? An instance of a class
How is a class a form of encapsulation?  bundles data (attributes) and functions (methods) together
How is a class an abstraction of an object? It represents only the essential features
How do you access information in an object? IN THE CODE
How do you initialize a class? __init__()
How do you set a default value  in the code
How do you use type hinting? In the code
How do you set an attribute to be private? In the code
How do you make a class method? In the code
Why do we include docstrings to explain what the class or method does
What does "self" do as a parameter for class methods? the object itself
What are getter and setter methods? In the code
What are magic methods? __init__, in the code
Where are class objects saved? (heap or stack?) heap
"""
