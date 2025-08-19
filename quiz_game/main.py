import csv 
import random
question = []
answer = []
count = 0
user_score = 0
score = 0
breaking = False
time = 0
best_score = None

reset = False


while True:
    if breaking == False: 
        count = random.randint(0,48)
        def open_question():
            global best_score
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
            global time
            global user_score
            print("Enter your answer")
            user_input = input("press Q to exit:")
            
            answer_checker = answer[count]
            if "{" + "'Answer'" + ":" +" " +"'" + user_input + "'" + "}" == str(answer_checker):
                print("You are right!","The answer is: ",user_input)
                print(time)
                reset = True
                user_score = user_score + 100
                print(f"Your score is: {user_score}")


            elif user_input == "Q":
                print("saving...")
                saving_score()
                global breaking
                breaking = True

            else:
                print(f"You are wrong! The right aswer is {answer[count]}")
                print(answer_checker)
            
                
            
            
            
            if "{'Answer': 'A'}" == str(answer[0]):
                print("Yes")

            else:
                print("No")
        def saving_score():
            with open("quiz_game/score.csv", "a") as f:
                f.write("Score\n")
                f.write(user_score)
    else:
        break
    
    open_question()
