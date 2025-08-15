import csv 
import random
question = []
answer = []
count = 0


while True:
    count = count +1
    def open_question():
        with open('quiz_game\question.csv', 'r') as file:
            csv_reader = csv.DictReader(file)
            for row in csv_reader:
                answer.append({
                    "Answer": row["answer"]
                })
                question.append({
                    "Question": row["question"]

                })
            print(question[count])
            answer_question()
    def answer_question():
        print("Enter your answer")
        user_input = input(":")
        answer_checker = answer[count]
        if "{" + "'Answer'" + ":" +" " +"'" + " " + user_input + "'" + "}" == str(answer_checker):
            print("You are right!","The answer is: ",user_input)
        else:
            print(f"You are wrong! The right aswer is {answer[count]}")
            print(answer)
            print(answer_checker)
        
        
        
        
        if "{'Answer': ' A'}" == str(answer[0]):
            print("Yes")

        else:
            print("No")

    open_question()
