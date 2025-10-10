class Student:
    """Student class with ID, first and last names, as well as grade. 
    Method to get full name, increase age by 1"""
    first_name: str
    last_namez: str
    age: int
    def __init__(self, first_name = "John", last_name = "Doe", id = 000, grade = 100):
        """Sets all vaules"""
        self.first_name = first_name
        self.last_name = last_name
        self.id = id
        self.grade = grade

    def setAge(self) -> str: # setter method
        """Increase age by 1"""
        self.grade += 3
    
    def full(self): # getter method
        """Create full name"""
        return self.first_name + " " + self.last_name
    
    def __str__(self):
        return f"Name: {self.first_name}\nLast Name: {self.last_name}\nAge: {self.age}"
    
    tia = Student("tia","LaRose", "001",98)

    print()
        