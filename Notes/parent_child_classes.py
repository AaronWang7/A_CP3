# AW 3RD Parent and Child Classes Notes

class Animal():
    def __init__(self,age,color):
        self.age = age
        self.color = color
    
    def move(self):
        pass

    def __str__(self):
       return f"Age: {self.age}\ncolor: {self.color}"
    
    def __eq__(self, other):
        return (self.age == other.age and
                 self.color == other.color and 
                 self.onwer == other.onwer and
                 self.name == other.name)
                 
    

class Dog(Animal):
   def __init__(self, age, color,onwer,breed,name):
      super().__init__(age, color)
      self.onwer = onwer
      self.breed = breed
      self.name = name
      
   def move(self):
    print("Dog Runs")

   def __str__(self):
       return f"Age: {self.age}\ncolor: {self.color}\n Onwer: {self.onwer}\nBreed: {self.breed}\nName: {self.name}\n"
   

bobby = Dog(5,"brown","Jill","Bulldog","Booby")
birdy = Dog(1,"Black","Nikkie","Lab","Birdy")
alex = Animal(16,"white")
nick = Animal(15,"White")
print(bobby)
print(alex) 

print(bobby)
print(alex == nick)
print(bobby == birdy)








#use test_filename.py

"""
What is a parent/abstract class?
How do you create a child class?
How does a child class inherit from the parent class?
What are class diagrams?
How are class diagrams used to show a parent/child relationship?
How do you overload operators in a class?
What are test cases?
Why do we use test cases?
How do we create test cases?
"""