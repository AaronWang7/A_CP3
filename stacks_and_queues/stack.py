class Stack:
    def __init__(self):
        self.stack = []

    def is_empty(self):
        return len(self.stack) == 0

    def push(self, item):
        self.stack.append(item)

    def pop(self):
        if not self.is_empty():
            return self.stack.pop()
        else:
            return None

    def peek(self):
        if not self.is_empty():
            return self.stack[-1]

    def size(self):
        return len(self.stack)


"""
What is time complexity in programming? How long it will take for your program to run
What are the levels of time complexity?
What is a stack? A stack of plates
What does LIFO stand for? Last in first out
What are the things that a stack can do?
How are stacks normally written in python?
What is a queue? A line
How are queues different from stacks? It's first in first out
"""
