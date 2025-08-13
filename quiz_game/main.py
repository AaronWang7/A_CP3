import csv 
import random
question = []
ran = 0
def open_question():
    with open('quiz_game\main.py', 'r') as file:
        csv_reader = csv.DictReader(file)
        for i in csv_reader:
            question.append(csv_reader)  
        print(question)

open_question()