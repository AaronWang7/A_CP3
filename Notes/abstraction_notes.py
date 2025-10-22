"""
Why can't you create an object from an abstract class?        :Because abstract classes are incomplete by themselves and are meant to be subclasses. (too abstract)
How do abstract classes and abstract methods work together?   :Because abstract methods are defined in abstract classes, and they must be implemented by any concrete subclass that inherits from the abstract class.
What does abc stand for?                                      :Abstract Base Classes
What are decorators?                                          :They are functions that modify the behavior of other functions or methods.(@abstractmethod is a decorator) give further infomation of what to follow to program
What is an abstract method?                                   :A method that is declared, but contains no implementation. It is meant to be overridden in derived classes.  Over write methods.
What is a concrete method?                                    :A method that has an implementation and can be called on an object of a class. In line 43 of the code below(move method in Sealion class) eats method
What is an abstract class?                                    :Place holder class that defines methods that must be created within any child classes built from the abstract class.
How do you make an abstract                                   :method? By using the @abstractmethod 
How can you create a class that inherits from multiple?       :By listing the parent classes in parentheses in the class definition, separated by commas. ex: class ChildClass(ParentClass1, ParentClass2):
Why does the inheritance order matter?                        :Because it determines the method resolution order (MRO), which is the order in which Python looks for methods and attributes in a hierarchy of classes. (tells version of method)
What does the mro() method do when you call it on a class?    :It returns a list that shows the order in which classes are searched when looking for a method or attribute. This is useful for understanding how Python resolves method calls in the presence of multiple inheritance.
What is Method resolution order?                              :The order in which Python looks for methods and attributes in a hierarchy of classes, especially when multiple inheritance is involved. (order of inheritance) 
:
"""
from abc import ABC, abstractmethod

class Animal(ABC):
    def __init__(self,name):
        self.name = name
    
    @abstractmethod
    def move(self):
        pass

    def __str__(self):
        return f"Animal Name: {self.name}"
    

class Quadrupeds(Animal):
    def init__(self,name):
        super().__init__(name)

    def move(self):
        print(f"{self.name}Walk or Run.")

class Aquatic(Animal):
    def init__(self,name):
        super().__init__(name)

    def move(self):
        print(f"{self.name} Can swim.")

class Sealoin(Aquatic,Quadrupeds):
    def init__(self,name):
        super().__init__(name)
    def eats(self):
        print(f"{self.name} eats penguin and Krill.")
    

sealoin = Sealoin("Greg")

print(sealoin)
sealoin.eats()
sealoin.move()
print(Aquatic.mro())

# Why do we use abstract classes? :To provide a common interface for a group of related classes, ensuring that they implement certain methods while allowing for flexibility in their specific implementations.
# When would you use an abstract class in your code? :When you want to define a common interface for a set of related classes, but you don't want to provide a complete implementation for that interface in the base class. This is useful when you want to enforce certain methods to be implemented in subclasses while allowing those subclasses to have their own specific behaviors.
