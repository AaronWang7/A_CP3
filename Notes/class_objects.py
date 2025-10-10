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
What is an object? 
How is a class a form of encapsulation? 
How is a class an abstraction of an object?
How do you access information in an object?
How do you initialize a class?
How do you set a default value 
How do you use type hinting?
How do you set an attribute to be private?
How do you make a class method?
Why do we include docstrings/
What does "self" do as a parameter for class methods?
What are getter and setter methods?
What are magic methods?
Where are class objects saved? (heap or stack?)
"""