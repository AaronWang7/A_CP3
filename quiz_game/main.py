import csv 
import random
while True:

    def open_question():
        question = [1]
        questions = [1]
        with open('quiz_game\main.py', 'r') as file:
            csv_reader = csv.DictReader(file)
            print(csv_reader)
            #questions.append(random.choice(question))

    open_question()
