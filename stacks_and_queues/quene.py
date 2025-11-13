class Quene:
    def __init__(self):
        self.quene = []

    def is_empty(self):
        return len(self.quene) == 0

    def enquene(self, item):
        self.quene.append(item)

    def dequene(self):
        if not self.is_empty():
            return self.quene.pop(0)
        else:
            return None

    def peek(self):
        if not self.is_empty():
            return self.quene[0]

    def size(self):
        return len(self.quene)
