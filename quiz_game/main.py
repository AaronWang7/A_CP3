import csv 
import random
question = []
while True:

    def open_question():
        with open('quiz_game\question.csv', 'r') as file:
            csv_reader = csv.DictReader(file)
            for row in csv_reader:
                question.append({
                    "Question": row["question"],
                    "answer": row["answer"],

                })

    open_question()
    print(question[1])
