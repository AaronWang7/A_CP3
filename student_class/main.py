class Student:
    """Student class with ID, first and last names, as well as grade. 
    Method to get full name, increase grade by 9"""
    first_name: str
    last_namez: str
    id: str
    grade: int
    def __init__(self, first_name = "John", last_name = "Doe", id =  "000", grade = 100):
        """Sets all vaules"""
        self.first_name = first_name
        self.last_name = last_name
        self.id = id
        self.grade = grade

    def setGrade(self) -> str: # setter method
        """Increase grdae by 9"""
        self.grade += 9
    
    def full(self): # getter method
        """Create full name"""
        return self.first_name + " " + self.last_name
        
    
    def __str__(self):
        return f"Name: {self.first_name}\nLast Name: {self.last_name}\nID: {self.id}\nGrade: {self.grade}"

# Apply student info    
tia = Student("Tia","Ha Ha","001", 0)
tia.setGrade()
aaron = Student("Aaron","Wang","007",99)
max = Student("Max","Hoho","002",57)
max.setGrade()
tom = Student ("Tom","LoLo","006",89)
tom.setGrade()
tim = Student("Tim", "CoCo", "005", 34)
john = Student()

# Prints out info
print("\nStudent Info:\n")
print(tia,"\n")
print(aaron,"\n")
print(max,"\n")
print(tom,"\n")
print(tim,"\n")

#Prints out updated info
print("Upgraded grades")
print(f"{tia.full()} Grdae: {tia.grade}")
print(f"{max.full()} Grdae: {max.grade}")
print(f"{tom.full()} Grdae: {tom.grade}")


